#ifndef SYSTEM_K1921VG015_H
#define SYSTEM_K1921VG015_H

#ifdef __cplusplus
extern "C" {
#endif

//-- Includes ------------------------------------------------------------------
#include <stdint.h>
#include <K1921VG015.h>
#ifdef __EMBOX__
#include <framework/mod/options.h>
#include <module/embox/arch/system.h>
#include <module/third_party/bsp/niiet/k1921vg015_system.h>

#define HSECLK_VAL OPTION_MODULE_GET(third_party__bsp__niiet__k1921vg015_system,NUMBER,external_clk_freq)
#define SYSCLK_PLL
#endif

//-- Defines -------------------------------------------------------------------
#ifdef EXTCLK_FREQ
#define HSECLK_VAL EXTCLK_FREQ
#endif


#ifndef HSECLK_VAL
#define HSECLK_VAL 0
#endif

#define OSECLK_STARTUP_TIMEOUT 0x100000
#define SYSCLK_SWITCH_TIMEOUT 0x100000
#define HSICLK_VAL 1000000
#define LSICLK_VAL 32768


//-- Variables -----------------------------------------------------------------
extern uint32_t SystemCoreClock; // System Clock Frequency (Core Clock)
extern uint32_t SystemPll0Clock; // System PLL0Clock Frequency
extern uint32_t SystemPll1Clock; // System PLL1Clock Frequency
extern uint32_t USBClock; 		 // USB Clock Frequency (USB PLL Clock)

//-- Functions -----------------------------------------------------------------
// Initialize the System
extern void SystemInit(void);


/**
 * \brief   Updates the SystemCoreClock,SystemPll0Clock,SystemPll1Clock and USBClock with current core Clock retrieved from registers
 * 
 */
extern void SystemCoreClockUpdate(void);

#ifdef __cplusplus
}
#endif

#endif // SYSTEM_K1921VG015_H
