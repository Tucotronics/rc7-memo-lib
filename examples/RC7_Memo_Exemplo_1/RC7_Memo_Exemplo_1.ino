#include <Arduino.h>
#include <Tucotronics_RC7_Memo.h>


Tucotronics_RC7_Memo rele(2, 3, 4, 5);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  for (int canal = 1; canal <= 7; canal++){
    rele.ligar(canal);
    delay(1000);
  }
  for (int canal = 1; canal <= 7; canal++){
    rele.desligar(canal);
    delay(1000);
  }

}
