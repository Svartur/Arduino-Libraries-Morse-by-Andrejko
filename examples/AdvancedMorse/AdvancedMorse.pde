/* 
  'Advanced Morse' example - in which you can set custom parameters. 
  Example of simple sketch for Morse-by-Andrejko library.
  This sketch will send well known SOS. 
  Created by Andrejko, 23. May 2017
*/

#include <Morse.h>

Morse morse(13);           // create 'morse' instance and define output pin

void setup() {
  morse.dotTime(100);      // set duration of the 'dot' (shorter)
  morse.dashTime(500);     // set duration of the 'dash' (longer)
  morse.pause(1000);       // set duration of pause between dots or dashes (not space between words) (should be longest)
}

void loop() {
                           // we are going to send 'SOS' every 5 seconds   ( . . .   - - -   . . . )
  morse.dot();
  morse.dot();
  morse.dot();

  delay(1000);
  
  morse.dash();
  morse.dash();
  morse.dash();

  delay(1000);

  morse.dot();
  morse.dot();
  morse.dot();

  delay(5000);
}