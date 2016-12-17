/*
  www.CodeDecay.com.br
  Licença de uso: Apache 2.0
  
  Liga o LED por 1 segundo, em seguida desliga o LED por 1 segundo.
  Lê o LDR na porta analógica.
  Aciona um LED de acordo com o valor lido.

  Nesse exercício vamos manter o LED externo nos pinos 11, 10 e 9 do
  Arduino e adicionar um LDR como sensor de luminosidade
 */


// a função setup() é executada quando você liga ou reinicia a placa
void setup() {
  // configura o pino 11 como saída:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT); // Configura o pino 10 como saida
  pinMode(9, OUTPUT); // Configura o pino 9 como saida

  pinMode(13, OUTPUT); // LED que acendera de acordo com a luminosidade do LDR

  Serial.begin(9600); // Inicia a comunicação serial com o computador
}

// a função loop() é executada para sempre:
void loop() {
  digitalWrite(11, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino 11)
  digitalWrite(10, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino 10)
  digitalWrite(9, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino 9)
  delay(1000);              // espera 1 segundo = 1000 milisegundos
  digitalWrite(11, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino 11)
  digitalWrite(10, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino 10)
  digitalWrite(9, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino 9)
  delay(1000);              // espera 1 segundo novamente

  int lumi = analogRead(A0); // le o sensor analogico na porta A0 - escala de 0 a 1023
  Serial.print("Luminosidade: "); // escreve a palavra "Luminosidade: " no monitor do computador
  Serial.println(lumi); // escreve o valor da luminosidade lida na tela do computador
  delay(1000);

  if (lumi > 500) { // veriica se a luminosidade eh maior do que 500
    digitalWrite(13, HIGH); // acende o LED se for maior
  } else {
    digitalWrite(13, LOW); // apaga o LED se for menor
  }


}
