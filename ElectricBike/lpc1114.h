/* David Nachmonson and Jonah Wallace
 * Bike
 * CSCI_497I
*/


#ifndef __LPC1114_H_
#define __LPC1114_H_


#define DIR_INPUT  0
#define DIR_OUTPUT 1
#define NULL ((void*)0)

extern volatile unsigned ISER;


//const char top_6x14[] = {
// 0xf0, 0x08, 0x04, 0x04, 0x08, 0xf0, /*  48 zero */
// 0x00, 0x10, 0x08, 0xfc, 0x00, 0x00, /*  49 one */
//  0x18, 0x04, 0x04, 0x04, 0xc4, 0x38, /*  50 two */
//  0x04, 0x04, 0x44, 0x64, 0x54, 0x8c, /*  51 three */
//  0x00, 0xc0, 0x30, 0x08, 0xfc, 0x00, /*  52 four */
//  0x7c, 0x24, 0x24, 0x24, 0x24, 0xc4, /*  53 five */
//  0xf0, 0x88, 0x44, 0x44, 0x44, 0x80, /*  54 six */
//  0x04, 0x04, 0x04, 0xc4, 0x34, 0x0c, /*  55 seven */
//  0x18, 0xa4, 0x44, 0x44, 0xa4, 0x18, /*  56 eight */
//  0x78, 0x84, 0x84, 0x84, 0x44, 0xf8 /*  57 nine */
//}; 

//const char bot_6x14[] = {
// 0x03, 0x04, 0x08, 0x08, 0x04, 0x03, /*  48 zero */
//  0x00, 0x08, 0x08, 0x0f, 0x08, 0x08, /*  49 one */
//  0x08, 0x0c, 0x0a, 0x09, 0x08, 0x08, /*  50 two */
//  0x06, 0x08, 0x08, 0x08, 0x08, 0x07, /*  51 three */
//  0x03, 0x02, 0x02, 0x02, 0x0f, 0x02, /*  52 four */
//  0x06, 0x08, 0x08, 0x08, 0x08, 0x07, /*  53 five */
//  0x07, 0x08, 0x08, 0x08, 0x08, 0x07, /*  54 six */
//  0x00, 0x0c, 0x03, 0x00, 0x00, 0x00, /*  55 seven */
//  0x07, 0x08, 0x08, 0x08, 0x08, 0x07, /*  56 eight */
//  0x06, 0x08, 0x08, 0x08, 0x04, 0x03 /*  57 nine */
//};





extern struct {
  volatile unsigned CONSET;
  volatile unsigned STAT;
  volatile unsigned DAT;
  volatile unsigned ADR0;
  volatile unsigned SCLH;
  volatile unsigned SCLL;
  volatile unsigned CONCLR;
  volatile unsigned MMCTRL;
  volatile unsigned ADR1;
  volatile unsigned ADR2;
  volatile unsigned ADR3;
  volatile unsigned DATA_BUFFER;
  volatile unsigned MASK0;
  volatile unsigned MASK1;
  volatile unsigned MASK2;
  volatile unsigned MASK3;
}I2C0;


extern struct {
  volatile       unsigned SYSMEMREMAP;
  volatile struct {
    unsigned SSP0_RST_N: 1;
    unsigned I2C_RST_N:  1;
    unsigned SSP1_RST_N: 1;
    unsigned CAN_RST_N: 3;
  } PRESETCTRL;
  volatile       unsigned SYSPLLCTRL;
  volatile const unsigned SYSPLLSTAT;
  volatile const unsigned __RESERVED_0[4];
  volatile       unsigned SYSOSCCTRL;
  volatile       unsigned WDTOSCCTRL;
  volatile       unsigned IRCCTRL;
  volatile const unsigned __RESERVED_1[1];
  volatile       unsigned SYSRSTSTAT;
  volatile const unsigned __RESERVED_2[3];
  volatile       unsigned SYSPLLCLKSEL;
  volatile       unsigned SYSPLLCLKUEN;
  volatile const unsigned __RESERVED_3[10];
  volatile       unsigned MAINCLKSEL;
  volatile       unsigned MAINCLKUEN;
  volatile       unsigned SYSAHBCLKDIV;
  volatile const unsigned __RESERVED_4[1];
  volatile struct {
    unsigned SYS:        1;
    unsigned ROM:        1;
    unsigned RAM:        1;
    unsigned FLASHREG:   1;
    unsigned FLASHARRAY: 1;
    unsigned I2C:        1;
    unsigned GPIO:       1;
    unsigned CT16B0:     1;
    unsigned CT16B1:     1;
    unsigned CT32B0:     1;
    unsigned CT32B1:     1;
    unsigned SSP0:       1;
    unsigned UART:       1;
    unsigned ADC:        1;
    unsigned __ :        1;
    unsigned WDT:        1;
    unsigned IOCON:      1;
    unsigned CAN:        1;
    unsigned SSP1:       1;
    unsigned ___:        13;
  } SYSAHBCLKCTRL;
  volatile const unsigned __RESERVED_5[4];
  volatile       unsigned SSP0CLKDIV;
  volatile       unsigned UARTCLKDIV;
  volatile       unsigned SSP1CLKDIV;
  volatile const unsigned __RESERVED_6[12];
  volatile       unsigned WDTCLKSEL;
  volatile       unsigned WDTCLKUEN;
  volatile       unsigned WDTCLKDIV;
  volatile const unsigned __RESERVED_7[1];
  volatile       unsigned CLKOUTCLKSEL;
  volatile       unsigned CLKOUTUEN;
  volatile       unsigned CLKOUTCLKDIV;
  volatile       unsigned __RESERVED_8[5];
  volatile const unsigned PIOPORCAP0;
  volatile const unsigned PIOPORCAP1;
  volatile const unsigned __RESERVED_9[18];
  volatile       unsigned BODCTRL;
  volatile       unsigned SYSTCKCAL;
  volatile const unsigned __RESERVED_A[6];
  volatile       unsigned IRQLATENCY;
  volatile       unsigned NMISRC;
  volatile const unsigned __RESERVED_B[34];
  volatile       unsigned STARTAPRP0;
  volatile       unsigned STARTERP0;
  volatile       unsigned STARTRSRP0CLR;
  volatile const unsigned STARTSRP0;
  volatile const unsigned __RESERVED_C[8];
  volatile       unsigned PDSLEEPCFG;
  volatile       unsigned PDAWAKECFG;
  volatile	 unsigned PDRUNCFG;
  volatile const unsigned __RESERVED_D[110];
  volatile const unsigned DEVICE_ID;
} SYSCON;

struct GPIO {
  volatile       unsigned DATA[0x1000];
  volatile const unsigned ____[0x1000];
  volatile struct {
    unsigned PIN0  : 1;
    unsigned PIN1  : 1;
    unsigned PIN2  : 1;
    unsigned PIN3  : 1;
    unsigned PIN4  : 1;
    unsigned PIN5  : 1;
    unsigned PIN6  : 1;
    unsigned PIN7  : 1;
    unsigned PIN8  : 1;
    unsigned PIN9  : 1;
    unsigned PIN10 : 1;
    unsigned PIN11 : 1;
    unsigned _____ : 20;
  } DIR;
  volatile struct {
    unsigned PIN0  : 1;
    unsigned PIN1  : 1;
    unsigned PIN2  : 1;
    unsigned PIN3  : 1;
    unsigned PIN4  : 1;
    unsigned PIN5  : 1;
    unsigned PIN6  : 1;
    unsigned PIN7  : 1;
    unsigned PIN8  : 1;
    unsigned PIN9  : 1;
    unsigned PIN10 : 1;
    unsigned PIN11 : 1;
    unsigned _____ : 20;
  } IS;
   volatile struct {
    unsigned PIN0  : 1;
    unsigned PIN1  : 1;
    unsigned PIN2  : 1;
    unsigned PIN3  : 1;
    unsigned PIN4  : 1;
    unsigned PIN5  : 1;
    unsigned PIN6  : 1;
    unsigned PIN7  : 1;
    unsigned PIN8  : 1;
    unsigned PIN9  : 1;
    unsigned PIN10 : 1;
    unsigned PIN11 : 1;
    unsigned _____ : 20;
  } IBE;
   volatile struct {
    unsigned PIN0  : 1;
    unsigned PIN1  : 1;
    unsigned PIN2  : 1;
    unsigned PIN3  : 1;
    unsigned PIN4  : 1;
    unsigned PIN5  : 1;
    unsigned PIN6  : 1;
    unsigned PIN7  : 1;
    unsigned PIN8  : 1;
    unsigned PIN9  : 1;
    unsigned PIN10 : 1;
    unsigned PIN11 : 1;
    unsigned _____ : 20;
  } IEV;
   volatile struct {
    unsigned PIN0  : 1;
    unsigned PIN1  : 1;
    unsigned PIN2  : 1;
    unsigned PIN3  : 1;
    unsigned PIN4  : 1;
    unsigned PIN5  : 1;
    unsigned PIN6  : 1;
    unsigned PIN7  : 1;
    unsigned PIN8  : 1;
    unsigned PIN9  : 1;
    unsigned PIN10 : 1;
    unsigned PIN11 : 1;
    unsigned _____ : 20;
  } IE;
  volatile struct {
    unsigned const PIN0  : 1;
    unsigned const PIN1  : 1;
    unsigned const PIN2  : 1;
    unsigned const PIN3  : 1;
    unsigned const PIN4  : 1;
    unsigned const PIN5  : 1;
    unsigned const PIN6  : 1;
    unsigned const PIN7  : 1;
    unsigned const PIN8  : 1;
    unsigned const PIN9  : 1;
    unsigned const PIN10 : 1;
    unsigned const PIN11 : 1;
    unsigned _____ : 20;
  } RIS;
  volatile struct {
    unsigned const PIN0  : 1;
    unsigned const PIN1  : 1;
    unsigned const PIN2  : 1;
    unsigned const PIN3  : 1;
    unsigned const PIN4  : 1;
    unsigned const PIN5  : 1;
    unsigned const PIN6  : 1;
    unsigned const PIN7  : 1;
    unsigned const PIN8  : 1;
    unsigned const PIN9  : 1;
    unsigned const PIN10 : 1;
    unsigned const PIN11 : 1;
    unsigned _____ : 20;
  } MIS;
  volatile struct {
    unsigned PIN0  : 1;
    unsigned PIN1  : 1;
    unsigned PIN2  : 1;
    unsigned PIN3  : 1;
    unsigned PIN4  : 1;
    unsigned PIN5  : 1;
    unsigned PIN6  : 1;
    unsigned PIN7  : 1;
    unsigned PIN8  : 1;
    unsigned PIN9  : 1;
    unsigned PIN10 : 1;
    unsigned PIN11 : 1;
    unsigned _____ : 20;
  } IC;

};

struct TMR16 {
  volatile struct {
    unsigned MR0:   1;
    unsigned MR1:   1;
    unsigned MR2:   1;
    unsigned MR3:   1;
    unsigned CR0:   1;
    unsigned CR1:   1;
    unsigned const __: 1;
  } IR;
  volatile struct {
    unsigned CEn:  1;
    unsigned CRst: 1;
    unsigned ___: 30;
  } TCR;

  volatile unsigned TC;
  volatile unsigned PR;
  volatile unsigned PC;
  volatile struct {
    unsigned MR0I: 1;
    unsigned MR0R: 1;
    unsigned MR0S: 1;
    unsigned MR1I: 1;
    unsigned MR1R: 1;
    unsigned MR1S: 1;
    unsigned MR2I: 1;
    unsigned MR2R: 1;
    unsigned MR2S: 1;
    unsigned MR3I: 1;
    unsigned MR3R: 1;
    unsigned MR3S: 1;
    unsigned ___: 20;
  } MCR;

  volatile unsigned MR0;
  volatile unsigned MR1;
  volatile unsigned MR2;
  volatile unsigned MR3;
  volatile unsigned CCR;
  volatile unsigned CR0[4];
  volatile unsigned EMR;
  volatile const unsigned RESERVED[12];
  volatile unsigned CTCR;
  volatile struct {
    unsigned PWMEN0: 1;
    unsigned PWMEN1: 1;
    unsigned PWMEN2: 1;
    unsigned PWMEN3: 1;
    unsigned _____: 28;
  } PWMC;
};

struct TMR32 {
  volatile struct {
    unsigned MR0:   1;
    unsigned MR1:   1;
    unsigned MR2:   1;
    unsigned MR3:   1;
    unsigned CR0:   1;
    unsigned CR1:   1;
    unsigned const __: 1;
  } IR;
  volatile struct {
    unsigned CEn:  1;
    unsigned CRst: 1;
    unsigned ___: 30;
  } TCR;

  volatile unsigned TC;
  volatile unsigned PR;
  volatile unsigned PC;
  volatile struct {
    unsigned MR0I: 1;
    unsigned MR0R: 1;
    unsigned MR0S: 1;
    unsigned MR1I: 1;
    unsigned MR1R: 1;
    unsigned MR1S: 1;
    unsigned MR2I: 1;
    unsigned MR2R: 1;
    unsigned MR2S: 1;
    unsigned MR3I: 1;
    unsigned MR3R: 1;
    unsigned MR3S: 1;
    unsigned ___: 20;
  } MCR;

  volatile unsigned MR0;
  volatile unsigned MR1;
  volatile unsigned MR2;
  volatile unsigned MR3;
  volatile unsigned CCR;
  volatile unsigned CR0[4];
  volatile unsigned EMR;
  volatile const unsigned RESERVED[12];
  volatile unsigned CTCR;
  volatile struct {
    unsigned PWMEN0: 1;
    unsigned PWMEN1: 1;
    unsigned PWMEN2: 1;
    unsigned PWMEN3: 1;
    unsigned _____: 28;
  } PWMC;
};

extern struct {
  volatile       unsigned PIO2_6;
  volatile const unsigned RESERVED;
  volatile       unsigned PIO2_0;
  volatile       unsigned RESET_PIO0_0;
  volatile       unsigned PIO0_1;
  volatile       unsigned PIO1_8;
  volatile const unsigned RESERVED2;
  volatile       unsigned PIO0_2;
  volatile       unsigned PIO2_7;
  volatile       unsigned PIO2_8;
  volatile       unsigned PIO2_1;
  volatile       unsigned PIO0_3;
  volatile struct {
    unsigned FUNC: 2;
    unsigned RESERVED: 5;
    unsigned I2CMODE: 2;
  }PIO0_4;
  volatile struct {
    unsigned FUNC: 2;
    unsigned RESERVED: 5;
    unsigned I2CMODE: 2;
  }PIO0_5;
  volatile struct {
    unsigned FUNC: 3;
    unsigned MODE: 2;
    unsigned HIST: 1;
    unsigned ____: 4;
    unsigned   OD: 1;
    unsigned ___: 21;
  } PIO1_9;
  volatile	 unsigned PIO3_4;
  volatile	 unsigned PIO2_4;
  volatile 	 unsigned PIO2_5;
  volatile	 unsigned PIO3_5;
  volatile 	 unsigned PIO0_6;
  volatile 	 unsigned PIO0_7;
  volatile 	 unsigned PIO2_9;
  volatile 	 unsigned PIO2_10;
  volatile	 unsigned PIO2_2;
  volatile	 unsigned PIO0_8;
  volatile struct {
    unsigned       FUNC: 3;
    unsigned       MODE: 2;
    unsigned       HYS:  1;
    unsigned const RES1: 4;
    unsigned       OD:   1;
    unsigned const RES2: 21;
  } PIO0_9;
  volatile	 unsigned SWCLK_PIO0_10;
  volatile	 unsigned PIO1_10;
  volatile	 unsigned PIO2_11;
  volatile struct {
    unsigned       FUNC:      3;
    unsigned       MODE:      2;
    unsigned       HYS:       1;
    unsigned const RESERVED1: 1;
    unsigned       ADMODE:    1;
    unsigned const RESERVED2: 2;
    unsigned       OD:        1;
    unsigned const RESERVED3: 21; 
  } R_PIO0_11;
  volatile	 unsigned R_PIO1_0;
  volatile 	 unsigned R_PIO1_1;
  volatile	 unsigned R_PIO1_2;
  volatile	 unsigned PIO3_0;
  volatile	 unsigned PIO3_1;
  volatile	 unsigned PIO2_3;
  volatile	 unsigned SWDIO_PIO1_3;
  volatile	 unsigned PIO1_4;
  volatile	 unsigned PIO1_11;
  volatile 	 unsigned PIO3_2;
  volatile	 unsigned PIO1_5;
  volatile	 unsigned PIO1_6;
  volatile	 unsigned PIO1_7;
  volatile	 unsigned PIO3_3;
  volatile	 unsigned SCK_LOC;
  volatile	 unsigned DSR_LOC;
  volatile	 unsigned DCD_LOC;
  volatile	 unsigned RI_LOC;
} IOCON;

extern struct {
  volatile struct { 
    unsigned 	   SEL:        8;
    unsigned 	   CLKDIV:     8;
    unsigned 	   BURST:      1;
    unsigned 	   CLKS:       3;
    unsigned const RESERVED1:  4;
    unsigned 	   START:      3;
    unsigned 	   EDGE:       1;
    unsigned const RESERVED2:  4;	 
  } CR;
  volatile struct {
    unsigned const RESERVED1:  6;
    unsigned       V_VREF:    10;
    unsigned const RESERVED2:  8;
    unsigned	   CHN:	       3;
    unsigned const RESERVED3:  3;
    unsigned 	   OVERRUN:    1;
    unsigned	   DONE:       1;
  } GDR;
  volatile const unsigned RESERVED;
  volatile struct {
    unsigned	   ADINTEN:    8;
    unsigned	   ADGINTEN:   1;
    unsigned const RESERVED:  23;
  } INTEN;
  volatile struct {
    unsigned const RESERVED1:  6;
    unsigned	   V_VREF:    10;
    unsigned const RESERVED2: 14;
    unsigned	   OVERRUN:    1;
    unsigned	   DONE:       1;
  } DR0;
  volatile	 unsigned DR1;
  volatile	 unsigned DR2;
  volatile	 unsigned DR3;
  volatile	 unsigned DR4;
  volatile	 unsigned DR5;
  volatile	 unsigned DR6;
  volatile	 unsigned DR7;
  volatile	 unsigned STAT;
} AD0;

extern struct GPIO GPIO0;
extern struct GPIO GPIO1;
extern struct GPIO GPIO2;
extern struct GPIO GPIO3;
extern struct TMR16 TMR16B0;
extern struct TMR16 TMR16B1;
extern struct TMR32 TMR32B0;
extern struct TMR32 TMR32B1;
#endif
