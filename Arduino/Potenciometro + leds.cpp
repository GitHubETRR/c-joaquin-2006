int VALOR = 0; 
int LED_NIVEL_0 = 2;
int LED_NIVEL_1 = 4;
int LED_NIVEL_2 = 6;
int LED_NIVEL_3 = 8;
int LED_NIVEL_4 = 10;
int LED_NIVEL_5 = 12;

void setup() {
  Serial.begin(9600); 
  pinMode(LED_NIVEL_0, OUTPUT); 
  pinMode(LED_NIVEL_1, OUTPUT);
  pinMode(LED_NIVEL_2, OUTPUT); 
  pinMode(LED_NIVEL_3, OUTPUT);
  pinMode(LED_NIVEL_4, OUTPUT);
  pinMode(LED_NIVEL_5, OUTPUT);
}
void loop() {
  VALOR = analogRead(A0);
  Serial.print("Valor analogico : ");
  Serial.println(VALOR);
  delay(1000);

  if (VALOR >= 0 && VALOR < 170){
    analogWrite(LED_NIVEL_0, map(VALOR, 0, 170, 255, 0));
  }
  else{
    digitalWrite(LED_NIVEL_0, LOW);
  }
  
  if (VALOR >= 170 && VALOR < 340){
    analogWrite(LED_NIVEL_1, map(VALOR, 170, 340, 0, 255));
  }
  else{
    digitalWrite(LED_NIVEL_1, LOW);
  }
  
  if (VALOR >= 340 && VALOR < 510){
    analogWrite(LED_NIVEL_2, map(VALOR, 340, 510, 0, 255));
  }
  else{
    digitalWrite(LED_NIVEL_2, LOW);
  }
  
  if (VALOR >= 510 && VALOR < 680){
    analogWrite(LED_NIVEL_3, map(VALOR, 510, 680, 0, 255));
  }
  else{
    digitalWrite(LED_NIVEL_3, LOW);
  }
  
  if (VALOR >= 680 && VALOR < 850){
    analogWrite(LED_NIVEL_4, map(VALOR, 680, 850, 0, 255));
  }
  else{
    digitalWrite(LED_NIVEL_4, LOW);
  }
  
  if (VALOR >= 850 && VALOR <= 1023){
    analogWrite(LED_NIVEL_5, map(VALOR, 850, 1023, 0, 255));
  }
  else{
    digitalWrite(LED_NIVEL_5, LOW);
  }
  delay(300);
}