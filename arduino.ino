#include "lib/laaArduinoLibrary/laaArduinoLibrary.cpp"

output::analog ::Led Agiallo, Averde, Agiallo2;
output::digital::Led Dverde, Drosso, Drosso2;

void loop() {};

void setup() {
  Agiallo.accendi();
  Averde.accendi();
  Agiallo2.accendi();

  Dverde.accendi();
  Drosso.accendi();
  Drosso2.accendi();
};
