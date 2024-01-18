#include "../../../../Base/Base.cpp";

namespace input::analog {
  class Led : public base::analog::Led {
    public:
      Led() : base::analog::Led() {
        setIoInput();
      }
  };
}
