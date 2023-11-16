#include "mtimer.h"

static volatile uint64_t _timestamp;
static volatile irqfunc_t* _mtimer_irq_callback;
static volatile uint64_t _irq_ticks;
void _mtimer_handler();

void mtimer_set_raw_time_cmp(uint64_t clock_offset) {
    // First of all set 
    uint64_t new_mtimecmp = mtimer_get_raw_time() + clock_offset;
#if (__riscv_xlen == 64)
    // Single bus access
    volatile uint64_t *mtimecmp = (volatile uint64_t*)(RISCV_MTIMECMP_ADDR);
    *mtimecmp = new_mtimecmp;
#else
    volatile uint32_t *mtimecmpl = (volatile uint32_t *)(RISCV_MTIMECMP_ADDR);
    volatile uint32_t *mtimecmph = (volatile uint32_t *)(RISCV_MTIMECMP_ADDR+4);
    // AS we are doing 32 bit writes, an intermediate mtimecmp value may cause spurious interrupts.
    // Prevent that by first setting the dummy MSB to an unacheivable value
    *mtimecmph = 0xFFFFFFFF;  // cppcheck-suppress redundantAssignment
    // set the LSB
    *mtimecmpl = (uint32_t)(new_mtimecmp & 0x0FFFFFFFFUL);
    // Set the correct MSB
    *mtimecmph = (uint32_t)(new_mtimecmp >> 32); // cppcheck-suppress redundantAssignment
#endif
}
 
/** Read the raw time of the system timer in system timer clocks
 */
uint64_t mtimer_get_raw_time(void) {
#if ( __riscv_xlen == 64)
    // Directly read 64 bit value
    volatile uint64_t *mtime = (volatile uint64_t *)(RISCV_MTIME_ADDR);
    return *mtime;
#else
    volatile uint32_t * mtimel = (volatile uint32_t *)(RISCV_MTIME_ADDR);
    volatile uint32_t * mtimeh = (volatile uint32_t *)(RISCV_MTIME_ADDR+4);
    uint32_t mtimeh_val;
    uint32_t mtimel_val;
    do {
        // There is a small risk the mtimeh will tick over after reading mtimel
        mtimeh_val = *mtimeh;
        mtimel_val = *mtimel;
        // Poll mtimeh to ensure it's consistent after reading mtimel
        // The frequency of mtimeh ticking over is low
    } while (mtimeh_val != *mtimeh);
    return (uint64_t) ( ( ((uint64_t)mtimeh_val)<<32) | mtimel_val);
#endif
} 



void mtimer_config_irq(uint64_t ticks, irqfunc_t* irq_callback){
    // Global interrupt disable
    riscv_irq_global_disable();
    _irq_ticks = ticks;
    // Setup timer for 1 second interval
    _timestamp = mtimer_get_raw_time();
    _mtimer_irq_callback = irq_callback;
    mtimer_set_raw_time_cmp(_irq_ticks);
    riscv_irq_set_handler(RISCV_IRQ_MTI, _mtimer_handler);
    riscv_irq_enable(RISCV_IRQ_MTI);
    riscv_irq_global_enable();
}

void _mtimer_handler(){
    // Timer exception, keep up the one second tick.
    _mtimer_irq_callback();
    
    mtimer_set_raw_time_cmp(_irq_ticks);
    _timestamp = mtimer_get_raw_time();

}