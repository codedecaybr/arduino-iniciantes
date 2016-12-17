/*
  www.CodeDecay.com.br
  Liga o LED por 1 segundo, em seguida desliga o LED por 1 segundo.
  Lê o LDR na porta analógica 0.

  Nesse exercício vamos manter o LED externo no pino 11 do
  Arduino e adicionar um LDR como sensor de luminosidade na porta analógica 0.

  Se você realizou o desafio proposto, provavelmente tem mais LEDs conectados
  na sua placa. Você pode escolher se quer usá-los ou se prefere manter apenas
  um LED no pino 11.
 */


// a função setup() é executada quando você liga ou reinicia a placa
void setup() {
  // configura o pino 11 como saída:
  pinMode(11, OUTPUT);

  Serial.begin(9600); // Inicia a comunicação serial com o computador
}

// a função loop() é executada para sempre:
void loop() {
  digitalWrite(11, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino 11)
  delay(1000);              // espera 1 segundo = 1000 milisegundos
  digitalWrite(11, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino 11)
  delay(1000);              // espera 1 segundo novamente

  int lumi = analogRead(A0); // le o sensor analogico na porta A0 - escala de 0 a 1023
  Serial.print("Luminosidade: "); // escreve a palavra "Luminosidade: " no monitor do computador
  Serial.println(lumi); // escreve o valor da luminosidade lida na tela do computador
  delay(1000);

}
