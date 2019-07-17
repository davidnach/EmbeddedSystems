
void reset() {
  volatile unsigned	*DIR   = (unsigned*)0x50018000;
  volatile unsigned	*DATA  = (unsigned*)0x50010000;
  const int		 DELAY = 600000;    /* tweak this */
  const int		 PIN9  = 1<<9;	    /* or 0x200 */
  
  *DIR |= PIN9;
   
  while(1) {
    DATA[PIN9] ^= PIN9;
    for(int i=0; i < DELAY; ++i) {
    }
  }
}
