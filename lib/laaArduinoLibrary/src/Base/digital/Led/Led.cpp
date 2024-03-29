#include "../../../ArduinoComponente/ArduinoComponente.cpp";

namespace base::digital {

  class Led : public ArduinoComponente {
    public:
      Led() : ArduinoComponente(false) {};

      void accendi() { digitalWrite(pin, HIGH); };
      void spegni() { digitalWrite(pin, LOW); };
  };
}
