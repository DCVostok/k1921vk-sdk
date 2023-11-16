/*
 *
 * PLIC header file bm310s6 core
 *
 * created by DVS
 *
*/

#ifndef _PLIC_H
#define _PLIC_H

#include "stdint.h"
#include "riscv-irq.h"
#define __I     volatile const                /*!< defines 'read only' permissions      */
#define __O     volatile                      /*!< defines 'write only' permissions     */
#define __IO    volatile                      /*!< defines 'read / write' permissions   */


enum Plic_Target {
    Plic_Mach_Target = 0x0,
    Plic_SuperVisor_Target
};
#ifndef PLIC_NUM_VECTORS
    #define PLIC_NUM_VECTORS 32
#endif



void PLIC_Init(void);
void PLIC_SetIrqHandler (uint8_t target, uint32_t isr_num, irqfunc_t* func);
void PLIC_SetPriority (uint32_t isr_num, uint8_t pri);
void PLIC_IntEnable (uint8_t target, uint32_t isr_num);
void PLIC_IntDisable (uint8_t target, uint32_t isr_num);
void PLIC_MachHandler(void);
void PLIC_SetThreshold(uint8_t target, uint32_t value);

#endif
