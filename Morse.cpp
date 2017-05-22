#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin) {
  pinMode(_pin, OUTPUT);
  _pin = pin;

  _dotTime = 250;
  _dashTime = 500;
  _pause = 500;
}

void Morse::dotTime(int dotTime) {
  _dotTime = dotTime;
}

void Morse::dashTime(int dashTime) {
  _dashTime = dashTime;
}

void Morse::pause(int pause) {
  _pause = pause;
}

void Morse::dot() {
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(500);  
}

void Morse::dash() {
  digitalWrite(_pin, HIGH);
  delay(500);
  digitalWrite(_pin, LOW);
  delay(500);  
}

