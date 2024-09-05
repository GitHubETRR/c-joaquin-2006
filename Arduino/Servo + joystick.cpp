#include <Servo.h>
Servo ioe;
int Y = 0;


void setup() {
  ioe.attach(2);

}

void loop() {
  Y = analogRead(A1);
  int angulo = map(Y, 0, 1023, 0, 180);

  ioe.write(angulo);
  delay(10);

}