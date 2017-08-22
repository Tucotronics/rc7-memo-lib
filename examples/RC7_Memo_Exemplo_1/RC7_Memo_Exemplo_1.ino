#include <Arduino.h>
#include <Tucotronics_RC7_Memo.h>

// Construtor
// Use sempre pinos do mesmo registrador: 0 até 7 ou 8 até 13.
Tucotronics_RC7_Memo rele(2, 3, 4, 5);

void setup() {
  

}

void loop() {
  
  // liga todos os canais em sequencia.
  for (int canal = 1; canal <= 6; canal++){
    rele.ligar(canal);
    delay(600);
  }

  // desliga todos os canais em sequencia.
  for (int canal = 1; canal <= 6; canal++){
    rele.desligar(canal);
    delay(600 );
  }


}
