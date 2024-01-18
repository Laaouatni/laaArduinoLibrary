#include "../COSTANTS/COSTANTS.cpp";

class ArduinoComponente {
private:
  bool isInAnalogArray(int value);

protected:
  int pin;

public:
  virtual void accendi() = 0;
  virtual void spegni() = 0;

  static bool pinDisponibili[NUM_TOT_PIN];

  ArduinoComponente(bool isAnalog);

  void setIoInput()  { pinMode(pin, INPUT ); };
  void setIoOutput() { pinMode(pin, OUTPUT); };
};