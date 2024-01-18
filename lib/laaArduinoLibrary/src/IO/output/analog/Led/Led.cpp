#include "../../../../Base/Base.cpp";

namespace output::analog {
  class Led : public base::analog::Led {
    public:
      Led() : base::analog::Led() {
        setIoOutput();
      }
  };
}
