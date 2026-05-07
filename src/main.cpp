#include <Arduino.h>

int velocidade = 0; 
bool ultimoEstadoBotao = LOW; 

void setup() {
  pinMode(2, INPUT);  
  pinMode(9, OUTPUT); 
}

void loop() {
  bool estadoAtualBotao = digitalRead(2);

  if (estadoAtualBotao == HIGH && ultimoEstadoBotao == LOW) {
    velocidade = velocidade + 64; 
    if (velocidade > 255) {
      velocidade = 0; 
    }

    analogWrite(9, velocidade);
    delay(50); 
  }

  ultimoEstadoBotao = estadoAtualBotao;
}
