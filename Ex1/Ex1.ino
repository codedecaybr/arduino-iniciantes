/*
  www.CodeDecay.com.br
  Licença de uso: Apache 2.0
  
  Liga o LED por 1 segundo, em seguida desliga o LED por 1 segundo.

  O Arduino UNO já conta com um LED ligado ao pino 13 da placa. Nós
  vamos utilizá-lo nesse exercício.
 */


// a função setup() é executada quando você liga ou reinicia a placa
void setup() {
  // configura o pino 13 como saída:
  pinMode(13, OUTPUT);
}

// a função loop() é executada para sempre:
void loop() {
  digitalWrite(13, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino)
  delay(1000);              // espera 1 segundo = 1000 milisegundos
  digitalWrite(13, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino)
  delay(1000);              // espera 1 segundo novamente
}
