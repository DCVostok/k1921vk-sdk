#include "riscv-irq.h"
#include "plic.h"
#include "riscv-csr.h"
#include <stdint.h>

// machine irq handler
static void trap_handler(void)
    __attribute__((interrupt("machine"), optimize("align-functions=4"), section(".text.irq_entry_align16")));

irqfunc_t* riscv_irq_handler_map[RISCV_IRQ_NUMS];
irqfunc_t* riscv_exception_handler_map[RISCV_EXCP_NUMS];

void riscv_irq_init(void) {
    riscv_irq_global_disable();
    csr_write_mtvec((uint32_t*)trap_handler);
    riscv_irq_global_enable();
}

void riscv_irq_enable(unsigned int irq_num) {
    csr_set_bits_mie(1 << irq_num);
}

void riscv_irq_disable(unsigned int irq_num) {
    csr_clr_bits_mie(1 << irq_num);
}

void riscv_irq_set_handler(unsigned int irq_num, irqfunc_t* handler) {
    riscv_irq_handler_map[irq_num] = handler;
}

void riscv_exception_set_handler(unsigned int exception_num, irqfunc_t* handler) {
    riscv_exception_handler_map[exception_num] = handler;
}

void riscv_irq_global_enable(void) {
    // clear_csr(mstatus, MSTATUS_MPIE);
    csr_set_bits_mstatus(MSTATUS_MIE_BIT_MASK);
}

void riscv_irq_global_disable(void) {
    // clear_csr(mstatus, MSTATUS_MPIE);
    csr_clr_bits_mstatus(MSTATUS_MIE_BIT_MASK);
}

void riscv_irq_rise_msi(void) {
    volatile uint32_t* msip0 = (volatile uint32_t*)(RISCV_CLINT_MSIP0_ADDR);
    *msip0 = 0x1;
}

void riscv_irq_clear_msi(void) {
    volatile uint32_t* msip0 = (volatile uint32_t*)(RISCV_CLINT_MSIP0_ADDR);
    *msip0 = 0x0;
}

void _default_exception_handler(uint16_t except_num) {

    while (1) {};
}

void trap_handler(void) {
    uint_xlen_t mcause = csr_read_mcause();
    uint_xlen_t mstatus = csr_read_mstatus();
    uint_xlen_t mepc = csr_read_mepc();
    uint_xlen_t mie = csr_read_mie();

    

    if ((mcause & MCAUSE_INTERRUPT_BIT_MASK) == 0) {
        // handle exception
        mcause &= 0xFF;
        if (mcause >= RISCV_EXCP_NUMS) {
            while (1) {} // error
        }

        if (riscv_exception_handler_map[mcause] != 0) {
            riscv_exception_handler_map[mcause]();
        } else {
            _default_exception_handler(mcause); // NO handler,
        }
        // offset mepc to next instruction, considering the length of the instruction.
        mepc = *((uint8_t*)(mepc)) & 0x3 == 0x3 ? mepc + 4 : mepc + 2; 
    } else {
        // handle interrupt
        mcause &= 0xFF;
        if (mcause >= RISCV_IRQ_NUMS) {
            while (1) {} // error
        }
        riscv_irq_disable(mcause);
        riscv_irq_global_enable();// enable nested interrupts

        if (riscv_irq_handler_map[mcause] != 0) {
            riscv_irq_handler_map[mcause]();
        } else {
            while (1) {}; // NO handler
        }
        riscv_irq_global_disable();
        riscv_irq_enable(mcause);
    }

    csr_write_mie(mie);
    csr_write_mstatus(mstatus);
    csr_write_mepc(mepc);
}
