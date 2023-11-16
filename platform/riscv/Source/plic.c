#include "plic.h"
#include "riscv-csr.h"
#include "riscv-irq.h"
// pointers to handler functions for machine mode
irqfunc_t* mach_plic_handler[PLIC_NUM_VECTORS];
// pointers to handler functions for supervisor mode
irqfunc_t* supervisor_plic_handler[PLIC_NUM_VECTORS];

typedef struct {
	__IO uint32_t PRI[32];
	uint32_t Reserved1[992];
	__O uint32_t INT_PEND;
	uint32_t Reserved2[1023];
	__IO uint32_t M_INTEN;
	uint32_t Reserved3[31];
	__IO uint32_t U_INTEN;
	uint32_t Reserved4[2015];
	__O uint32_t NINT;
	__O uint32_t NPRI;
	uint32_t Reserved5[520190];
	__IO uint32_t MTHR;
	__IO uint32_t MICC;
	uint32_t Reserved6[1022];
	__IO uint32_t UTHR;
	__IO uint32_t UICC;

} PLIC_TypeDef ;

#define PLIC_BASE        (0x0C000000UL)
#define PLIC             ((volatile PLIC_TypeDef  *) PLIC_BASE)

// private functions
uint32_t PLIC_ClaimIrq      (uint8_t target);
void     PLIC_ClaimComplete (uint8_t target, uint32_t isrnum);

// defines
#define NULL_IRQ 0

void PLIC_Init(void){
	riscv_irq_disable(RISCV_IRQ_MEI);
    for (int i = 0; i < PLIC_NUM_VECTORS; i++){
      PLIC_SetPriority(i, 0);
      PLIC_IntDisable(Plic_Mach_Target, i);
	  PLIC_IntDisable(Plic_SuperVisor_Target, i);
    }
    PLIC_SetThreshold(Plic_Mach_Target, 0);
	PLIC_SetThreshold(Plic_SuperVisor_Target, 0);
    riscv_irq_set_handler(RISCV_IRQ_MEI, PLIC_MachHandler);
    riscv_irq_enable(RISCV_IRQ_MEI);
    return;
}

/*
 * Set PLIC handler function for isr num
 */

void PLIC_SetIrqHandler (uint8_t target, uint32_t isr_num, irqfunc_t* func)
{
    if(target == Plic_Mach_Target) {
        mach_plic_handler[isr_num] = func;
    } else {
        supervisor_plic_handler[isr_num] = func;
    }
}
/*
 * Set PLIC irq priority
 */

void PLIC_SetPriority (uint32_t isr_num, uint8_t pri)
{
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

void PLIC_IntEnable (uint8_t target, uint32_t isr_num)
{
	uint32_t value;

	//read - modify - write operation

    if(target == Plic_Mach_Target) {
    	value  = PLIC->M_INTEN;
    	value |= (1<<isr_num);
    	PLIC->M_INTEN = value;
    } else {
    	value = PLIC->U_INTEN;
    	value |= (1<<isr_num);
    	PLIC->U_INTEN = value;
    }
}

/*
 * Disable PLIC irq
 */

void PLIC_IntDisable (uint8_t target, uint32_t isr_num)
{
	uint32_t value;

	//read - modify - write operation

	if(target == Plic_Mach_Target) {
		value  = PLIC->M_INTEN;
		value &= ~(1<<isr_num);
		PLIC->M_INTEN = value;
	} else {
		value  = PLIC->U_INTEN;
		value &= ~(1<<isr_num);
		PLIC->U_INTEN = value;
	}
}

/*
 * Get current isr number
 */

uint32_t PLIC_ClaimIrq (uint8_t target)
{
	if(target == Plic_Mach_Target) {
		return (uint32_t)(PLIC->MICC);
	} else {
		return (uint32_t)(PLIC->UICC);
	}
}

/*
 * Set current isr as completed
 */

void PLIC_ClaimComplete (uint8_t target, uint32_t isrnum)
{
	if(target == Plic_Mach_Target) {
		PLIC->MICC = isrnum;
	} else {
		PLIC->UICC = isrnum;
	}
}

/*
 * Set threshold for irqs
 */

void PLIC_SetThreshold(uint8_t target, uint32_t value) {
	if(target == Plic_Mach_Target) {
		PLIC->MTHR = value;
	} else {
		PLIC->UTHR = value;
	}
}


void PLIC_MachHandler(void) {

	// handle interrupt
        uint32_t isr_num = PLIC->MICC;
        // check if handler exist
    if(mach_plic_handler[isr_num] != NULL_IRQ) {
		// call isr handler
		mach_plic_handler[isr_num]();
		// set isr completes
		
	}
        PLIC->MICC = isr_num;
}
