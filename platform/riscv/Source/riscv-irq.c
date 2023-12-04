#include "plic.h"
#include "riscv-irq.h"
#include "riscv-csr.h"
#include <stdint.h>

// machine irq handler
static void irq_entry(void) __attribute__((interrupt("machine"), optimize("align-functions=4"), section(".text.irq_entry_align16")));

irqfunc_t* riscv_irq_handler_map[RISCV_IRQ_NUMS];
irqfunc_t* riscv_exception_handler_map[RISCV_EXCP_NUMS];

void riscv_irq_init(void) { 
	riscv_irq_global_disable(); 
	csr_write_mtvec(irq_entry);
	riscv_irq_global_enable(); 
}

void riscv_irq_enable(unsigned int irq_num){
	
    csr_set_bits_mie(1 << irq_num);
}

void riscv_irq_disable(unsigned int irq_num){
	csr_clr_bits_mie(1 << irq_num);
}

void riscv_irq_set_handler(unsigned int irq_num, irqfunc_t *handler){
  riscv_irq_handler_map[irq_num] = handler;
}

void riscv_irq_global_enable(void)
{
    //clear_csr(mstatus, MSTATUS_MPIE);
    csr_set_bits_mstatus(MSTATUS_MIE_BIT_MASK); 

}

void riscv_irq_global_disable(void)
{
    //clear_csr(mstatus, MSTATUS_MPIE);
    csr_clr_bits_mstatus(MSTATUS_MIE_BIT_MASK);
}

void riscv_irq_rise_msi(void){
	volatile uint32_t *msip0= (volatile uint32_t *)(RISCV_CLINT_MSIP0_ADDR);
	*msip0 = 0x1;
}
void riscv_irq_clear_msi(void){
	volatile uint32_t *msip0= (volatile uint32_t *)(RISCV_CLINT_MSIP0_ADDR);
	*msip0 = 0x0;
}

// #pragma GCC push_options
// // Force the alignment for mtvec.BASE. A 'C' extension program could be aligned to to bytes.

void irq_entry (void)
{
	uint_xlen_t this_cause = csr_read_mcause();

	if((this_cause & MCAUSE_INTERRUPT_BIT_MASK) == 0) {
		// handle exception
		switch (this_cause & MCAUSE_EXCEPTION_CODE_BIT_MASK)
		{
			case RISCV_EXCP_INSTRUCTION_ADDRESS_MISALIGNED:
				break;
			case RISCV_EXCP_INSTRUCTION_ACCESS_FAULT:
				break;
			case RISCV_EXCP_ILLEGAL_INSTRUCTION:
				break;
			case RISCV_EXCP_BREAKPOINT:
				break;
			case RISCV_EXCP_LOAD_ADDRESS_MISALIGNED :
				break;
			case RISCV_EXCP_LOAD_ACCESS_FAULT:
				break;
			case RISCV_EXCP_STORE_AMO_ADDRESS_MISALIGNED:
				break;
			case RISCV_EXCP_STORE_AMO_ACCESS_FAULT:
				break;
			case RISCV_EXCP_ENVIRONMENT_CALL_FROM_U_MODE:
				break;

			default: // MCAUSE_EXCEPT UNKNOWN

				break;
		}

		while(1) {}; //TRAP
	} else {
		//handle interrupt
		this_cause &= 0xFF;
		if(riscv_irq_handler_map[this_cause] != 0) {
                  riscv_irq_handler_map[this_cause]();
		}else{
			while(1) {}; //NO handler
		}
	}
}
//#pragma GCC pop_options
