#include <Servo.h>
Servo ioe;

int potenciometro = 0;
int Valor_potenciometro;

void setup() {
  ioe.attach(2);
}

void loop() {
  Valor_potenciometro = analogRead(potenciometro);
  Valor_potenciometro = map(Valor_potenciometro, 0, 1023, 0, 180);
  ioe.write(Valor_potenciometro);
  delay(10);
}