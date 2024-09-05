int MIC = 2;
int LED = 3;
int VALOR;
int ESTADO;
#define BUZZER 4

void setup() {
  pinMode(MIC, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  VALOR = digitalRead(MIC);
  if (VALOR == HIGH){
    ESTADO = digitalRead(LED);
    digitalWrite(LED, !ESTADO);
    delay(500);
    digitalWrite(BUZZER, !ESTADO);
    Serial.println(VALOR);
  }
  }
