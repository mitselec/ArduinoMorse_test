/*******************************************
 *      Morse alphabet and timing Library  
 *      Dimopoulos Dimitrios 2015
 *  This project needs an 8-ohm speaker
 *  in order to hear the morse code   
 *******************************************/


#include "Arduino.h"

/*
 *Initialization of the output pin,tone frequency 
 *and the basic delay 
 */

int pin = 8;
int freq = 554;
int noteduration = 125;


/*
 * Dot function. Uses tone() function.
 */
void dit(){
  tone(8,freq,noteduration);
  delay(noteduration*1.3);
  noTone(8);
}

/*
 * Dash Function. Uses tone() function.
 */
void dah(){
  tone(8,freq,3*noteduration);
  delay(3*noteduration*1.3);
  noTone(8);
}

/*
 * The main morse beep function.Input is a character a-z and 0-9
 * output is the morse code corresponding to each lettter according
 * to a switch-case argument.
 */
 
void morse_beep(char x){
  switch(x){
    case 'a':
    case 'A':
      dit();
      dah();
      delay(noteduration);
      break;
    case 'b':
    case 'B':
      dah();
      dit();
      dit();
      dit();
      delay(noteduration);
      break;
    case 'c':
    case 'C':
      dit();
      dah();
      dit();
      dah();
      delay(noteduration);
      break;
    case 'd':
    case 'D':
      dah();
      dit();
      dit();
      delay(noteduration);
      break;
    case 'e':
    case 'E':
      dit();
      delay(noteduration);
      break;
    case 'f':
    case 'F':
      dit();
      dit();
      dah();
      dit();
      delay(noteduration);
      break;
    case 'g':
    case 'G':
      dah();
      dah();
      dit();
      delay(noteduration);
      break;
    case 'h':
    case 'H':
      dit();
      dit();
      dit();
      dit();
      delay(noteduration);
      break;
    case 'i':
    case 'I':
      dit();
      dit();
      delay(noteduration);
      break;
    case 'j':
    case 'J':
      dit();
      dah();
      dah();
      dah();
      delay(noteduration);
      break;
    case 'k':
    case 'K':
      dah();
      dit();
      dah();
      delay(noteduration);
      break;
    case 'l':
    case 'L':
      dit();
      dah();
      dit();
      dit();
      delay(noteduration);
      break;
    case 'm':
    case 'M':
      dah();
      dah();
      delay(noteduration);
      break;
    case 'n':
    case 'N':
      dah();
      dit();
      delay(noteduration);
      break;
    case 'o':
    case 'O':
      dah();
      dah();
      dah();
      delay(noteduration);
      break;
    case 'p':
    case 'P':
      dit();
      dah();
      dah();
      dit();
      delay(noteduration);
      break;
    case 'q':
    case 'Q':
      dah();
      dah();
      dit();
      dah();
      delay(noteduration);
      break;
    case 'r':
    case 'R':
      dit();
      dah();
      dit();
      delay(noteduration);
      break;
    case 's':
    case 'S':
      dit();
      dit();
      dit();
      delay(noteduration);
      break;
    case 't':
    case 'T':
      dah();
      break;
    case 'u':
      dit();
      dit();
      dah();
      delay(noteduration);
      break;
    case 'v':
    case 'V':
      dit();
      dit();
      dit();
      dah();
      delay(noteduration);
      break;
    case 'w':
    case 'W':
      dit();
      dah();
      dah();
      delay(noteduration);
      break;
    case 'x':
    case 'X':
      dah();
      dit();
      dit();
      dah();
      delay(noteduration);
      break;
    case 'y':
    case 'Y':
      dah();
      dit();
      dah();
      dah();
      delay(noteduration);
      break;
    case 'z':
    case 'Z':
      dah();
      dah();
      dit();
      dit();
      delay(noteduration);
      break;
    case '0':
      dah();
      dah();
      dah();
      dah();
      dah();
      delay(noteduration);
      break;
    case '1':
      dit();
      dah();
      dah();
      dah();
      dah();
      delay(noteduration);
      break;
    case '2':
      dit();
      dit();
      dah();
      dah();
      dah();
      delay(noteduration);
      break;
    case '3':
      dit();
      dit();
      dit();
      dah();
      dah();
      delay(noteduration);
      break;
    case '4':
      dit();
      dit();
      dit();
      dit();
      dah();
      delay(noteduration);
      break;
    case '5':
      dit();
      dit();
      dit();
      dit();
      dit();
      delay(noteduration);
      break;
    case '6':
      dah();
      dit();
      dit();
      dit();
      dit();
      delay(noteduration);
      break;
    case '7':
      dah();
      dah();
      dit();
      dit();
      dit();
      delay(noteduration);
      break;
    case '8':
      dah();
      dah();
      dah();
      dit();
      dit();
      delay(noteduration);
      break;
    case '9':
      dah();
      dah();
      dah();
      dah();
      dit();
      delay(noteduration);
      break;
    case ' ':
      delay(noteduration);
      delay(noteduration);
      break;
         
  }
  
}
