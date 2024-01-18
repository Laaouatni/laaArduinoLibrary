#include "../Led.cpp"

namespace base {
  namespace analog {
    void Led::transitionFromTo(int start, int end) {
      int direction = (start < end) ? 1 : -1;
      int delayTime = PAUSA / abs(end - start);

      for (int i = start; i != end + direction; i += direction) {
        analogWrite(pin, i);
        delay(delayTime);
      };
    };
  }
}