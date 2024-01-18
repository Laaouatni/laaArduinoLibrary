#include "../../../../Base/Base.cpp";

namespace output {
  namespace digital {
    class Led : public base::digital::Led {
      public:
        Led() : base::digital::Led() {
          setIoOutput();
        }
    };
  }
}