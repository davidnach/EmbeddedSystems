/* David Nachmonson and Jonah Wallace
 * Bike
 * CSCI_497I
*/


extern char __INITIAL_SP;
extern char __VECTOR_CHECKSUM;

void reset();
void default_handler(void);
void NMI() __attribute__((weak, alias("default_irq")));
void HardFault() __attribute__((weak, alias("default_irq")));
void SVCall() __attribute__((weak, alias("default_irq")));
void PendSV() __attribute__((weak, alias("default_irq")));
void SysTick() __attribute__((weak, alias("default_irq")));

void IRQ0() __attribute__((weak, alias("default_irq")));
void IRQ1() __attribute__((weak, alias("default_irq")));
void IRQ2() __attribute__((weak, alias("default_irq")));
void IRQ3() __attribute__((weak, alias("default_irq")));
void IRQ4() __attribute__((weak, alias("default_irq")));
void IRQ5() __attribute__((weak, alias("default_irq")));
void IRQ6() __attribute__((weak, alias("default_irq")));
void IRQ7() __attribute__((weak, alias("default_irq")));
void IRQ8() __attribute__((weak, alias("default_irq")));
void IRQ9() __attribute__((weak, alias("default_irq")));
void IRQ10() __attribute__((weak, alias("default_irq")));
void IRQ11() __attribute__((weak, alias("default_irq")));
void IRQ12() __attribute__((weak, alias("default_irq")));
void IRQ13() __attribute__((weak, alias("default_irq")));
void IRQ14() __attribute__((weak, alias("default_irq")));
void IRQ15() __attribute__((weak, alias("default_irq")));
void IRQ16() __attribute__((weak, alias("default_irq")));
void IRQ17() __attribute__((weak, alias("default_irq")));
void IRQ18() __attribute__((weak, alias("default_irq")));
void IRQ19() __attribute__((weak, alias("default_irq")));
void IRQ20() __attribute__((weak, alias("default_irq")));
void IRQ21() __attribute__((weak, alias("default_irq")));
void IRQ22() __attribute__((weak, alias("default_irq")));
void IRQ23() __attribute__((weak, alias("default_irq")));
void IRQ24() __attribute__((weak, alias("default_irq")));
void IRQ25() __attribute__((weak, alias("default_irq")));
void IRQ26() __attribute__((weak, alias("default_irq")));
void IRQ27() __attribute__((weak, alias("default_irq")));
void IRQ28() __attribute__((weak, alias("default_irq")));
void IRQ29() __attribute__((weak, alias("default_irq")));
void IRQ30() __attribute__((weak, alias("default_irq")));
void IRQ31() __attribute__((weak, alias("default_irq")));

static void default_irq() {
  while(1) {
  }
}



char* vector[48] __attribute__((section(".vector"))) = {
  (char*)&__INITIAL_SP,
  (char*)(&reset)+1,
  (char*)(&NMI)+1,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  (char*)&__VECTOR_CHECKSUM,
  0x00000000,
  0x00000000,
  0x00000000,
  (char*)(&SVCall)+1,
  0x00000000,
  0x00000000,
  (char*)(&PendSV)+1,
  (char*)(&SysTick)+1,
  (char*)(&IRQ0)+1,
  (char*)(&IRQ1)+1,
  (char*)(&IRQ2)+1,
  (char*)(&IRQ3)+1,
  (char*)(&IRQ4)+1,
  (char*)(&IRQ5)+1,
  (char*)(&IRQ6)+1,
  (char*)(&IRQ7)+1,
  (char*)(&IRQ8)+1,
  (char*)(&IRQ9)+1,
  (char*)(&IRQ10)+1,
  (char*)(&IRQ11)+1,
  (char*)(&IRQ12)+1,
  (char*)(&IRQ13)+1,
  (char*)(&IRQ14)+1,
  (char*)(&IRQ15)+1,
  (char*)(&IRQ16)+1,
  (char*)(&IRQ17)+1,
  (char*)(&IRQ18)+1,
  (char*)(&IRQ19)+1,
  (char*)(&IRQ20)+1,
  (char*)(&IRQ21)+1,
  (char*)(&IRQ22)+1,
  (char*)(&IRQ23)+1,
  (char*)(&IRQ24)+1,
  (char*)(&IRQ25)+1,
  (char*)(&IRQ26)+1,
  (char*)(&IRQ27)+1,
  (char*)(&IRQ28)+1,
  (char*)(&IRQ29)+1,
  (char*)(&IRQ30)+1,
  (char*)(&IRQ31)+1
};
