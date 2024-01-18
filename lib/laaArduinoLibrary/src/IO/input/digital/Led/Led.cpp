#include "../../../../Base/Base.cpp";

namespace input::digital {
  class Led : public base::digital::Led {
    public:
      Led() : base::digital::Led() {
        setIoInput();
      }
  };
}
