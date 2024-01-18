#include "../../../../Base/Base.cpp";

namespace output::digital {
  class Led : public base::digital::Led {
    public:
      Led() : base::digital::Led() {
        setIoOutput();
      }
  };
}