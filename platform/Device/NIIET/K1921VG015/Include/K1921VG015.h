#ifndef K1921VG015_H
#define K1921VG015_H
#include <stdint.h>
#include "K1921VG015_regs.h"


#define GPIOA_BASE              0x28000000UL
#define GPIOB_BASE              0x28001000UL
#define GPIOC_BASE              0x28002000UL

#define GPIOA                ((volatile t_GPIO_REG                *) GPIOA_BASE)
#define GPIOB                ((volatile t_GPIO_REG                *) GPIOB_BASE)
#define GPIOC                ((volatile t_GPIO_REG                *) GPIOC_BASE)



#define UART_PRESENT
#define UART_TOTAL    5
typedef enum {
  UART0_Num = 0,
  UART1_Num,
  UART2_Num,
  UART3_Num,
  UART4_Num
} UART_Num_TypeDef;

#define UART0_BASE              0x30006000UL
#define UART1_BASE              0x30007000UL
#define UART2_BASE              0x30008000UL
#define UART3_BASE              0x30009000UL
#define UART4_BASE              0x3000A000UL

#define UART0                ((volatile t_UART_REG                *) UART0_BASE)
#define UART1                ((volatile t_UART_REG                *) UART1_BASE)
#define UART2                ((volatile t_UART_REG                *) UART2_BASE)
#define UART3                ((volatile t_UART_REG                *) UART3_BASE)
#define UART4                ((volatile t_UART_REG                *) UART4_BASE)


#define TMR32_BASE              0x30000000UL

#define TMR32                ((volatile t_TMR32_REG                *) TMR32_BASE)
#define TMR32_CAPCOM0_VAL   *(( volatile uint32_t          *) 0x3000001CUL)

#define TMR0_BASE              0x30001000UL
#define TMR1_BASE              0x30002000UL
#define TMR2_BASE              0x30003000UL


#define TMR0                ((volatile t_TMR_REG                *) TMR0_BASE)
#define TMR1                ((volatile t_TMR_REG                *) TMR1_BASE)
#define TMR2                ((volatile t_TMR_REG                *) TMR2_BASE)

#define TMR0_CAPCOM0_VAL   *(( volatile uint32_t          *) 0x3000101CUL)

#define RCU_BASE      (0x3000E000UL)
#define RCU          ((volatile t_RCU_REG *) RCU_BASE)

#define RCU_UARTCLKCFG_CLKSEL_PLL0 (0b10)

#define FLASH_BASE   (0x3000D000UL)
#define FLASH       ((volatile t_FLASH_REG *) FLASH_BASE)

#define PMUSYS_BASE   (0x3000F000UL)
#define PMUSYS       ((volatile t_PMUSYS_REG *) PMUSYS_BASE)


#include "plic_config.h"


#endif//K1921VG015_H