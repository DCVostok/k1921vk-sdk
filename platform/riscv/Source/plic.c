#include "plic.h"
#include "riscv-csr.h"
#include "riscv-irq.h"
// pointers to handler functions for machine mode
irqfunc_t* mach_plic_handler[PLIC_NUM_VECTORS];
// pointers to handler functions for user mode
irqfunc_t* user_plic_handler[PLIC_NUM_VECTORS];

// private functions
uint32_t PLIC_ClaimIrq(uint8_t target);
void PLIC_ClaimComplete(uint8_t target, uint32_t isrnum);

// defines
#define NULL_IRQ 0

void PLIC_Init(void) {
    riscv_irq_disable(RISCV_IRQ_MEI);
    for (int i = 0; i < PLIC_NUM_VECTORS; i++) {
        PLIC_SetPriority(i, 0);
        PLIC_IntDisable(E_PLIC_MACHINE_TARGET, i);
        PLIC_IntDisable(E_PLIC_USER_TARGET, i);
    }
    PLIC_SetThreshold(E_PLIC_MACHINE_TARGET, 0);
    PLIC_SetThreshold(E_PLIC_USER_TARGET, 0);
    riscv_irq_set_handler(RISCV_IRQ_MEI, PLIC_MachHandler);
    riscv_irq_enable(RISCV_IRQ_MEI);
    return;
}

/*
 * Set PLIC handler function for isr num
 */

void PLIC_SetIrqHandler(uint8_t target, uint32_t isr_num, irqfunc_t* func) {
    if (target == E_PLIC_MACHINE_TARGET) {
        mach_plic_handler[isr_num] = func;
    } else {
        user_plic_handler[isr_num] = func;
    }
}

/*
 * Set PLIC irq priority
 */

void PLIC_SetPriority(uint32_t isr_num, uint8_t pri) {
    PLIC->PRI[isr_num] = pri;
}

/*
 * Set PLIC irq mode
 */

/*void PLIC_SetMode (uint32_t isr_num, Plic_IrqMode_TypeDef mode)
{
    PLIC->SRC_MODE[isr_num] = (uint32_t)(mode);
}*/

/*
 * Enable PLIC irq
 */

void PLIC_IntEnable(uint8_t target, uint32_t isr_num) {
    uint32_t value;

    //read - modify - write operation

    if (target == E_PLIC_MACHINE_TARGET) {
        value = PLIC->M_INTEN;
        value |= (1 << isr_num);
        PLIC->M_INTEN = value;
    } else {
        value = PLIC->U_INTEN;
        value |= (1 << isr_num);
        PLIC->U_INTEN = value;
    }
}

/*
 * Disable PLIC irq
 */

void PLIC_IntDisable(uint8_t target, uint32_t isr_num) {
    uint32_t value;

    //read - modify - write operation

    if (target == E_PLIC_MACHINE_TARGET) {
        value = PLIC->M_INTEN;
        value &= ~(1 << isr_num);
        PLIC->M_INTEN = value;
    } else {
        value = PLIC->U_INTEN;
        value &= ~(1 << isr_num);
        PLIC->U_INTEN = value;
    }
}

/*
 * Get current isr number
 */

uint32_t PLIC_ClaimIrq(uint8_t target) {
    if (target == E_PLIC_MACHINE_TARGET) {
        return (uint32_t)(PLIC->MICC);
    } else {
        return (uint32_t)(PLIC->UICC);
    }
}

/*
 * Set current isr as completed
 */

void PLIC_ClaimComplete(uint8_t target, uint32_t isrnum) {
    if (target == E_PLIC_MACHINE_TARGET) {
        PLIC->MICC = isrnum;
    } else {
        PLIC->UICC = isrnum;
    }
}

/*
 * Set threshold for irqs
 */

void PLIC_SetThreshold(uint8_t target, uint32_t value) {
    if (target == E_PLIC_MACHINE_TARGET) {
        PLIC->MTHR = value;
    } else {
        PLIC->UTHR = value;
    }
}

void PLIC_MachHandler(void) {

    // handle interrupt
    uint32_t isr_num;

    while ((isr_num = PLIC->MICC)) {
        if (mach_plic_handler[isr_num] != NULL_IRQ) {
            // call isr handler
            mach_plic_handler[isr_num]();
        }
        PLIC->MICC = isr_num;
    }
}
