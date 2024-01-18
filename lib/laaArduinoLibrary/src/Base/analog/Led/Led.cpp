#include "../../../ArduinoComponente/ArduinoComponente.cpp";

namespace base::analog {
  class Led : public ArduinoComponente {
    private:
      void transitionFromTo(int start, int end);

    public:
      Led() : ArduinoComponente(true) {};

      void accendi() { transitionFromTo(LOW_ANALOG, HIGH_ANALOG); };
      void spegni() { transitionFromTo(HIGH_ANALOG, LOW_ANALOG); };
  };
};
