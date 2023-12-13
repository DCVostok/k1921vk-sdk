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

} PLIC_TypeDef;

#define PLIC_BASE (0x0C000000UL)
#define PLIC      ((volatile PLIC_TypeDef*)PLIC_BASE)

enum Plic_Target {
    E_PLIC_MACHINE_TARGET = 0x0,
    E_PLIC_USER_TARGET
};
#ifndef PLIC_NUM_VECTORS
    #error "PLIC_NUM_VECTORS not defined"
#endif



void PLIC_Init(void);
void PLIC_SetIrqHandler (uint8_t target, uint32_t isr_num, irqfunc_t* func);
void PLIC_SetPriority (uint32_t isr_num, uint8_t pri);
void PLIC_IntEnable (uint8_t target, uint32_t isr_num);
void PLIC_IntDisable (uint8_t target, uint32_t isr_num);
void PLIC_MachHandler(void);
void PLIC_SetThreshold(uint8_t target, uint32_t value);

#endif
