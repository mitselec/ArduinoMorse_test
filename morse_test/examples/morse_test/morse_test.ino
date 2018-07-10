
/***********************************
 * Simple program to test the morse_beep() function
 * Reads serial input of characters that are then translated
 * to morse code
 ***********************************/

#include "morse_lib.h"
 
void setup() {
Serial.begin(9600);

}


void loop() {
char x = Serial.read(); 
morse_beep(x);  
}


