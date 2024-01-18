#include "../../ArduinoComponente.cpp";

bool ArduinoComponente::isInAnalogArray(int value) {
  const int analogPins[] = { 3, 5, 6, 9, 10, 11 };
  const int length = sizeof(analogPins) / sizeof(analogPins[0]);

  for (int i = 0; i < length; i++) {
    if (analogPins[i] == value) return true;
  };
};