#include <stdint.h>
#include <string.h>
#include "riscv-csr.h"

// Generic C function pointer.
typedef void (*function_t)(void);

// These symbols are defined by the linker script.
// See linker.lds
extern uint8_t __bss_start;
extern uint8_t __bss_end;
extern const uint8_t __data_source_start;
extern uint8_t __data_target_start;
extern uint8_t __data_target_end;

extern function_t __init_array_start;
extern function_t __init_array_end;
extern function_t __preinit_array_start;
extern function_t __preinit_array_end;
extern function_t __fini_array_start;
extern function_t __fini_array_end;

// This function will be placed by the linker script according to the section
// Raw function 'called' by the CPU with no runtime.
extern void _enter(void) __attribute__((naked, section(".text.init.enter")));

// Entry and exit points as C functions.
extern void _start(void) __attribute__((noreturn));
void _Exit(int exit_code) __attribute__((noreturn, noinline));
void _fpu_init(void);

// Standard entry point, no arguments.
extern int main(void);
extern void SystemInit(void);

// The linker script will place this in the reset entry point.
// It will be 'called' with no stack or C runtime configuration.
// NOTE - this only supports a single hart.
// tp will not be initialized
void _enter(void) {
    // Setup SP and GP
    // The locations are defined in the linker script
    __asm__ volatile(".option push;"
                     /*  The 'norelax' option is critical here.*/
                     // Without 'norelax' the global pointer will
                     // be loaded relative to the global pointer!
                     ".option norelax;"
                     "la    gp, __global_pointer$;"
                     ".option pop;"
                     "la    sp, __sp;"
                     "jal   zero, _start;"
                     : /* output: none %0 */
                     : /* input: none */
                     : /* clobbers: none */);

    // This point will not be executed, _start() will be called with no return.
}

#define MSTATUS_FS_MASK (0x6000)

void _fpu_init(void) {
    csr_set_bits_mstatus(MSTATUS_FS_MASK);
    csr_write_fcsr(0);
    __asm__ volatile("fmv.w.x f0, x0;"
                     "fmv.w.x f1, x0;"
                     "fmv.w.x f2, x0;"
                     "fmv.w.x f3, x0;"
                     "fmv.w.x f4, x0;"
                     "fmv.w.x f5, x0;"
                     "fmv.w.x f6, x0;"
                     "fmv.w.x f7, x0;"
                     "fmv.w.x f8, x0;"
                     "fmv.w.x f9, x0;"
                     "fmv.w.x f10,x0;"
                     "fmv.w.x f11,x0;"
                     "fmv.w.x f12,x0;"
                     "fmv.w.x f13,x0;"
                     "fmv.w.x f14,x0;"
                     "fmv.w.x f15,x0;"
                     "fmv.w.x f16,x0;"
                     "fmv.w.x f17,x0;"
                     "fmv.w.x f18,x0;"
                     "fmv.w.x f19,x0;"
                     "fmv.w.x f20,x0;"
                     "fmv.w.x f21,x0;"
                     "fmv.w.x f22,x0;"
                     "fmv.w.x f23,x0;"
                     "fmv.w.x f24,x0;"
                     "fmv.w.x f25,x0;"
                     "fmv.w.x f26,x0;"
                     "fmv.w.x f27,x0;"
                     "fmv.w.x f28,x0;"
                     "fmv.w.x f29,x0;"
                     "fmv.w.x f30,x0;"
                     "fmv.w.x f31,x0;"
                     : /* output: none %0 */
                     : /* input: none */
                     : /* clobbers: none */);
}

// At this point we have a stack and global poiner, but no access to global variables.
void _start(void) {
    // Init memory regions
    // Clear the .bss section (global variables with no initial values)
    memset((void*)&__bss_start, 0, (&__bss_end - &__bss_start));

    // Initialize the .data section (global variables with initial values)
    memcpy((void*)&__data_target_start, (const void*)&__data_source_start, (&__data_target_end - &__data_target_start));

    _fpu_init();

    // Call constructors
    for (const function_t* entry = &__preinit_array_start; entry < &__preinit_array_end; ++entry) {
        (*entry)();
    }
    for (const function_t* entry = &__init_array_start; entry < &__init_array_end; ++entry) {
        (*entry)();
    }
#ifndef __NO_SYSTEM_INIT
    SystemInit();
#endif
    int rc = main();

    // Call destructors
    for (const function_t* entry = &__fini_array_start; entry < &__fini_array_end; ++entry) {
        (*entry)();
    }

    _Exit(rc);
}

// This should never be called. Busy loop with the CPU in idle state.
void _Exit(int exit_code) {
    (void)exit_code;
    // Halt
    while (1) {
        __asm__ volatile("wfi");
    }
}
