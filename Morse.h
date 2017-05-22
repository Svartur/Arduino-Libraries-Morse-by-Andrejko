#ifndef Morse_h
#define Morse_h

#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include "pins_arduino.h"
  #include "WConstants.h"
#endif

class Morse {
  public:
    Morse(int pin);
    void dot();
    void dash();
    void dotTime(int dotTime);
    void dashTime(int dashTime);
    void pause(int pause);

  private:
    int _pin;
    int _dotTime;
    int _dashTime;
    int _pause;
};

#endif