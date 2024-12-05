#define PULSADOR 2
#define BUZZER_ACTIVO 8

void setup () {
  pinMode (PULSADOR, INPUT_PULLUP);
  pinMode (BUZZER_ACTIVO, OUTPUT);
}

void loop (){
  if(digitalRead(PULSADOR) == LOW) {
    for(int i=0; i < 5; i++){
      digitalWrite(BUZZER_ACTIVO, HIGH);
      delay(500);
      digitalWrite(BUZZER_ACTIVO, LOW);
      delay(500);
    }
  }
}
