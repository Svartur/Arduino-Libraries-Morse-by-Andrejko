/* 
  'Basic Morse' example - in which parameters are set by default.
  Example of simple sketch for Morse-by-Andrejko library.
  This sketch will send well known SOS. 
  Created by Andrejko, 23. May 2017
*/

#include <Morse.h>

Morse morse(13);          // create 'morse' instance and define output pin. Default parameters: Dot = 250 ms
                          //                                                                    Dash = 500 ms
                          //                                                                    Pause = 1000 ms   (between dots and dashes)
                                                                                                

void setup() {
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
