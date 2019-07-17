/* David Nachmonson and Jonah Wallace
 * Bike
 * CSCI_497I
*/


#if !defined(_d90f27ea_1a86_4e3f_b590_85905e8dae47)
#define _d90f27ea_1a86_4e3f_b590_85905e8dae47
/* Move Stepper Down
 * Move the stepper down towards gear zero
*/
void moveStepperDown(unsigned index);

/* Move Stepper Up
 * Move the stpper up towards gear five
*/
void moveStepperUp(unsigned index);

/* Clear Display
 * Clear the I2C display
*/
void clearDisplay();

/* Setup Display
 * Setup the heading for the I2C display
*/
void setupDisplay();

/* Write Character
 * Write the given character to the I2C display
*/
void writeCharacter(int asciiValue, int pixelsFromTop, int pixelsFromLeft);

/* Write Display
 * Write the front gear, back gear, and overall gear
 * to the I2C display
*/
void writeDisplay(unsigned speed, unsigned frontGear, unsigned backGear);

#endif
