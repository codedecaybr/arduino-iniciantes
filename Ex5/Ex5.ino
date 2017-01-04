/*
  www.CodeDecay.com.br
  Licença de uso: Apache 2.0
  
  Liga o LED por 1 segundo, em seguida desliga o LED por 1 segundo.
  Lê o LDR na porta analógica 0.
  lê o LM35 na porta analógica 1.

  Nesse exercício vamos manter o LED externo no pino 11 do
  Arduino, manter o LDR como sensor de luminosidade e adicionar
  o LM35Z para medir a temperatura do ambiente na porta analógica 1.
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

  int temp = analogRead(A1); // le o sensor analogico na porta A1 - escala de 0 a 1023
  float tempC = (temp * 5.0 * 100 ) / 1023.0; // Faz a conversao para graus Celsius
  Serial.print("Temperatura: "); // escreve a palavra "Temperatura: " no monitor do computador
  Serial.print(tempC); // escreve o valor da temperatura lida na tela do computador
  Serial.println(" C");
  delay(1000);
}
