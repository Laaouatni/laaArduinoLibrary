#include "../../../../Base/Base.cpp";

namespace input {
  namespace analog {
    class Led : public base::digital::Led {
      public:
        Led() : base::digital::Led() {
          setIoInput();
        }
    };
  }
};