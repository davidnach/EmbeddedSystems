
MEMORY {
       flash (rx): ORIGIN = 0x00000000, LENGTH = 32k
       sram (rwx): ORIGIN = 0x10000000, LENGTH = 4k
}

PROVIDE(__INITIAL_SP = ORIGIN(sram) + LENGTH(sram));
PROVIDE(__VECTOR_CHECKSUM = 0
			  - __INITIAL_SP
			  - (reset + 1)
			  - (NMI + 1));

SECTIONS {
	 .text : {
	       . = 0x00000000;
	       *(.vector);
	       . = ALIGN(4);
	       *(.text);
	 } > flash

	 .rodata : {
	    . = ALIGN(4);
	    *(.rodata);
	 } > flash

	 .data : {
	    . = 0x00000000;
	    *(.data);
	 } > sram AT > flash

	 .bss : {
	    . = ALIGN(4);
	    *(.bss);
	 } > sram
}

/*

ld-arm -o blink -T lpc1114.ld vector.o reset.o
objdump-arm -h blink

*/
