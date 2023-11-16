OUTPUT_ARCH("riscv")

/* Default Linker Script
 *
 * This is the default linker script for K1921VG015
 */

ENTRY(_enter)

MEMORY
{
    ram (arw!xi) : ORIGIN = 0x40000000, LENGTH = 256K /* Internal 256 Kb RAM0*/
    bram (arw!xi) : ORIGIN = 0x10000000, LENGTH = 64K /*Internal 64 Kb BatteryRAM  is connected to the battery power domain */
    rom (irx!wa) : ORIGIN = 0x80000000, LENGTH = 1M /* Internal flash 1 Mb */
}

PHDRS
{
    rom PT_LOAD;
    ram_init PT_LOAD;
    ram PT_LOAD;
    bram PT_LOAD;
    text PT_LOAD;
}

SECTIONS
{

    __stack_size = DEFINED(__stack_size) ? __stack_size : 0x4000;
    PROVIDE(__stack_size = __stack_size);
    /* ROM SECTION
     *
     * The following sections contain data which lives in read-only memory, if
     * such memory is present in the design, for the entire duration of program
     * execution.
     */

    .init : {
        KEEP (*(.text.init.enter))
        KEEP (*(SORT_NONE(.init)))
    } >rom :rom

    .fini : {
        KEEP (*(SORT_NONE(.fini)))
    } >rom :rom

    .preinit_array : ALIGN(4) {
        PROVIDE_HIDDEN (__preinit_array_start = .);
        KEEP (*(.preinit_array))
        PROVIDE_HIDDEN (__preinit_array_end = .);
    } >rom :rom

    .init_array : ALIGN(4) {
        PROVIDE_HIDDEN (__init_array_start = .);
        KEEP (*(SORT_BY_INIT_PRIORITY(.init_array.*) SORT_BY_INIT_PRIORITY(.ctors.*)))
        KEEP (*(.init_array EXCLUDE_FILE (*crtbegin.o *crtbegin?.o *crtend.o *crtend?.o ) .ctors))
        PROVIDE_HIDDEN (__init_array_end = .);
    } >rom :rom

    .fini_array : ALIGN(4) {
        PROVIDE_HIDDEN (__fini_array_start = .);
        KEEP (*(SORT_BY_INIT_PRIORITY(.fini_array.*) SORT_BY_INIT_PRIORITY(.dtors.*)))
        KEEP (*(.fini_array EXCLUDE_FILE (*crtbegin.o *crtbegin?.o *crtend.o *crtend?.o ) .dtors))
        PROVIDE_HIDDEN (__fini_array_end = .);
    } >rom :rom

 

    .ctors : {
        KEEP (*crtbegin.o(.ctors))
        KEEP (*crtbegin?.o(.ctors))
        KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o ) .ctors))
        KEEP (*(SORT(.ctors.*)))
        KEEP (*(.ctors))
    } >rom :rom

    .dtors : {
        KEEP (*crtbegin.o(.dtors))
        KEEP (*crtbegin?.o(.dtors))
        KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o ) .dtors))
        KEEP (*(SORT(.dtors.*)))
        KEEP (*(.dtors))
    } >rom : rom

    .rodata : {
        *(.rdata)
        *(.rodata .rodata.*)
        *(.gnu.linkonce.r.*)
        . = ALIGN(4);
        *(.srodata.cst16)
        *(.srodata.cst8)
        *(.srodata.cst4)
        *(.srodata.cst2)
        *(.srodata .srodata.*)
    } >rom :rom


    /* TEXT SECTION
     *
     * The following section contains the code of the program, excluding
     * everything that's been allocated into the ITIM/LIM already
     */

    .text : {
        *(.text.startup .text.startup.*)
        . = ALIGN(16);
        *(.text.irq_entry_align16)
        *(.text .text.*)
        *(.gnu.linkonce.t.*)
    } >rom :text

    /* RAM SECTION
     *
     * The following sections contain data which is copied from read-only
     * memory into a RAM memory
     */

    .data : ALIGN(4) {
        PROVIDE(__data_start = .);
        *(.data .data.*)
        *(.gnu.linkonce.d.*)
        . = ALIGN(4);
        PROVIDE( __global_pointer$ = . + 0x800 );
        *(.sdata .sdata.* .sdata2.*)
        *(.gnu.linkonce.s.*)
        PROVIDE(__data_end = .);
    } >ram AT>rom :ram_init

    PROVIDE( __data_source_start = LOADADDR(.data) );
    PROVIDE( __data_target_start = ADDR(.data) );
    PROVIDE( __data_target_end = ADDR(.data) + SIZEOF(.data) );


    .bss (NOLOAD): ALIGN(4) {
        __bss_start = .;
        *(.sbss*)
        *(.gnu.linkonce.sb.*)
        *(.bss .bss.*)
        *(.gnu.linkonce.b.*)
        *(COMMON)
        __bss_end = .;
    } >ram :ram

    .bss_bram (NOLOAD): ALIGN(4) {
        __bss_bram_start = .;
        *(.bss_bram* .bss_bram*.*)
        __bss_bram_end = .;
    } >bram :bram

    .heap (NOLOAD) : ALIGN(8) {
        PROVIDE( _end = . );
        PROVIDE( end = . );
        PROVIDE( __heap_start = . );
        PROVIDE( _heap_end = . );
        PROVIDE( __heap_end = . );
    } >ram :ram

    .stack ORIGIN(ram) + LENGTH(ram) - __stack_size :ALIGN(16)
    {
      . = __stack_size;
      PROVIDE( __sp = . );
    } >ram 
}
