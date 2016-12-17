/*
  www.CodeDecay.com.br
  Liga o LED por 1 segundo, em seguida desliga o LED por 1 segundo.
  Envia uma mensagem para o computador.

  Nesse exercício vamos manter o LED externo no pino 11 do
  Arduino e enviar uma mensagem para o computador através da comunicação
  serial. A mensagem será visualizada no Monitor Serial da Arduino IDE.
 */


// a função setup() é executada quando você liga ou reinicia a placa
void setup() {
  // configura o pino 11 como saída:
  pinMode(11, OUTPUT);

  Serial.begin(9600); // Inicia a comunicação serial com o computador
}

// a função loop() é executada para sempre:
void loop() {
  digitalWrite(11, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino)
  delay(1000);              // espera 1 segundo = 1000 milisegundos
  digitalWrite(11, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino)
  delay(1000);              // espera 1 segundo novamente

  Serial.println("Ola, mundo!"); // envia o texto "Ola, mundo" para o monitor serial da Arduino IDE
}
