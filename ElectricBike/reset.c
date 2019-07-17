/* David Nachmonson and Jonah Wallace
 * Bike
 * CSCI_497I
*/


#include "lpc1114.h"

extern unsigned __DATA_LMA;
extern unsigned __DATA_VMA;
extern unsigned __DATA_END;
extern unsigned __BSS_VMA;
extern unsigned __BSS_END;
typedef void(*ctor_t)();
extern ctor_t __INIT_VMA;
extern ctor_t __INIT_END;

void setup() __attribute__((weak));
void loop()  __attribute__((weak));

void reset() {
  SYSCON.MAINCLKSEL = 0;
  SYSCON.MAINCLKUEN = 0;
  SYSCON.MAINCLKUEN = 1;

  SYSCON.SYSPLLCTRL = 0x23;
  SYSCON.SYSPLLCLKSEL = 0;
  SYSCON.SYSPLLCLKUEN = 0;
  SYSCON.SYSPLLCLKUEN = 1;
   
  unsigned* from = &__DATA_LMA;
  unsigned* to   = &__DATA_VMA;
  unsigned* end  = &__DATA_END;
  while(to < end) {
    *to = *from;
    ++to;
    ++from;
  }

  to =  &__BSS_VMA;
  end = &__BSS_END;
  while(to < end) {
    *to = 0;
    ++to;
  }

  ctor_t* ctor_from = &__INIT_VMA;
  ctor_t* ctor_end =  &__INIT_END;
  while(ctor_from != ctor_end) {
    (*ctor_from)();
    ++ctor_from;
  }

  SYSCON.PDRUNCFG &= ~(1<<7);
 
  while(SYSCON.SYSPLLSTAT == 0) {
  }

  SYSCON.MAINCLKSEL = 0x3;
  SYSCON.MAINCLKUEN = 0;
  SYSCON.MAINCLKUEN = 1;


  if (setup != NULL) {
    setup();
  }

  if(loop != NULL) {
    while(1) {
      loop();
    }
  } else {
    while(1) {
      asm("wfi");
    }
  }
 }

