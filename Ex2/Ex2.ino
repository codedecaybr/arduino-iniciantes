/*
  www.CodeDecay.com.br
  Licença de uso: Apache 2.0
  
  Liga o LED por 1 segundo, em seguida desliga o LED por 1 segundo.

  Nesse exercício vamos conectar um LED externo no pino 11 do
  Arduino.
 */


// a função setup() é executada quando você liga ou reinicia a placa
void setup() {
  // configura o pino 11 como saída:
  pinMode(11, OUTPUT);
}

// a função loop() é executada para sempre:
void loop() {
  digitalWrite(11, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino)
  delay(1000);              // espera 1 segundo = 1000 milisegundos
  digitalWrite(11, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino)
  delay(1000);              // espera 1 segundo novamente
}
