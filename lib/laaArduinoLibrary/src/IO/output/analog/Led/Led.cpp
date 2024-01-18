#include "../../../../Base/Base.cpp";

namespace output {
  namespace analog {
    class Led : public base::analog::Led {
      public:
        Led() : base::analog::Led() {
          setIoOutput();
        }
    };
  }
}