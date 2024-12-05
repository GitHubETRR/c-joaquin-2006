int BOTON_1 = A0;
int BOTON_2 = A1;
int LED = 9;
int BUZZER = 8;
int BOTON_OLD_1 = 1;
int BOTON_OLD_2 = 1; 
int BOTON_NEW_1;
int BOTON_NEW_2;
int LED_BRIGHT = 0;
int BUZZER_DELAY = 200;

void setup() {
  Serial.begin(9600);
  pinMode(BOTON_1, INPUT);
  pinMode(BOTON_2, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  BOTON_NEW_1 = digitalRead(BOTON_1);
  BOTON_NEW_2 = digitalRead(BOTON_2);
  Serial.print("BOTON_1 = ");
  Serial.print(BOTON_NEW_1);
  Serial.print(" BOTON_2 = ");
  Serial.println(BOTON_NEW_2);
  Serial.println(LED_BRIGHT);
  delay(250);

  if (BOTON_NEW_1 == 0){
    LED_BRIGHT = LED_BRIGHT - 15;
    analogWrite(LED, LED_BRIGHT);
  }
  if(BOTON_NEW_2 == 0){
    LED_BRIGHT = LED_BRIGHT + 15;
    analogWrite(LED, LED_BRIGHT);
  }
  if (LED_BRIGHT <= 0){
    LED_BRIGHT = 0;
    digitalWrite(LED, 0);
    digitalWrite(BUZZER, HIGH); 
    delay(BUZZER_DELAY);
    digitalWrite(BUZZER, LOW); 
    analogWrite(LED, LED_BRIGHT);
  
  }
  if (LED_BRIGHT >= 255){
    LED_BRIGHT = 255;
    digitalWrite(LED, 255);
    digitalWrite(BUZZER, HIGH);
    delay(BUZZER_DELAY);
    digitalWrite(BUZZER, LOW);
    analogWrite(LED, LED_BRIGHT);
  }
}