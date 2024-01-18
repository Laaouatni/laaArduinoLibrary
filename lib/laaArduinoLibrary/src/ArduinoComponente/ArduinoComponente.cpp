#include "../CONSTANTS/CONSTANTS.cpp";

class ArduinoComponente {
  private:
    bool isInAnalogArray(int value);

  protected:
    int pin;

  public:
    static bool pinDisponibili[NUM_TOT_PIN];

    ArduinoComponente(bool isAnalog);

    void setIoInput()  { pinMode(pin, INPUT ); };
    void setIoOutput() { pinMode(pin, OUTPUT); };

    virtual void accendi() = 0;
    virtual void spegni()  = 0;
};