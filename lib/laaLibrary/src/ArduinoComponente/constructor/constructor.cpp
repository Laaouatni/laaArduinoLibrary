#include "../ArduinoComponente.cpp";

ArduinoComponente::ArduinoComponente(bool isAnalog) {
  pin = 0;

  while (pinDisponibili[pin] || (isAnalog && !isInAnalogArray(pin))) {
    pin++;
  };

  pinDisponibili[pin] = true;
};