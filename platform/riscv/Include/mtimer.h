#ifndef MTIMER_H
#define MTIMER_H

#include <stdint.h>
#include <riscv-irq.h>

#ifndef RISCV_CLINT_ADDR
#define RISCV_CLINT_ADDR 0x2000000UL
#endif

#ifndef RISCV_MTIMECMP_ADDR
#define RISCV_MTIMECMP_ADDR (RISCV_CLINT_ADDR + 0x4000UL)
#endif

#ifndef RISCV_MTIME_ADDR
#define RISCV_MTIME_ADDR (RISCV_CLINT_ADDR + 0xBFF8UL)
#endif


#define MTIMER_SECONDS_TO_CLOCKS(SEC,MTIME_FREQ_HZ)           \
    ((uint64_t)(((SEC)*(MTIME_FREQ_HZ))))

#define MTIMER_MSEC_TO_CLOCKS(MSEC,MTIME_FREQ_HZ)           \
    ((uint64_t)(((MSEC)*(MTIME_FREQ_HZ))/1000))

#define MTIMER_USEC_TO_CLOCKS(USEC,MTIME_FREQ_HZ)           \
    ((uint64_t)(((USEC)*(MTIME_FREQ_HZ))/1000000))


/**
  \brief   Set `mtimecmp` register value  offset relative to the `mtime` register.
  \param [in]  clock_offset  Number of clocks to add to the `mtime` register.
 */
void mtimer_set_raw_time_cmp(uint64_t clock_offset);

/**
  \brief   Get `mtime` register value.
  \return `mtime` register value.
 */
uint64_t mtimer_get_raw_time(void);


/**
  \brief   RISCV MTIMER configuration function for periodic interrupts
  \details Initializes the MTIMER and its interrupt.
  \param [in]  ticks  Number of ticks between two interrupts.
  \param [in]  irq_callback  Callback function to be called on interrupt.
 */
void mtimer_config_irq(uint64_t ticks, irqfunc_t* irq_callback);

#endif // #ifdef MTIMER_H
