

extern char __INITIAL_SP;
extern char __VECTOR_CHECKSUM;

void reset();
void NMI() __attribute__((weak, alias("default_irq")));

static void default_irq() {
  while(1) {

  }
}

static char* vector[48] __attribute__((section(".vector"))) = {
    (char*)&__INITIAL_SP,
    (char*)(&reset) + 1,
    (char*)(&NMI) + 1,
    0,
    0,
    0,
    0,
    (char*)&__VECTOR_CHECKSUM
};
