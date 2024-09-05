void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  float volts = (value * 5) / 1023.0;
  float celsius = volts * 100;
  Serial.print(celsius);
  Serial.println(" C");
  delay(1000);
}