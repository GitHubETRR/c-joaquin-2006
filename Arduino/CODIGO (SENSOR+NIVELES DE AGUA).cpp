int SENSOR;
int LED_VERDE = 2;
int LED_AMARILLO = 3;
int LED_ROJO = 5;

void setup() {
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);
  Serial.begin(9600);
}

void loop(){
Serial.println(SENSOR);
  SENSOR = analogRead(A0);
  if (SENSOR >= 0 && SENSOR < 600){
    digitalWrite(LED_VERDE, HIGH);
  }
  else{
    digitalWrite(LED_VERDE, LOW);
  } 
  if (SENSOR > 600 && SENSOR < 650){
    digitalWrite(LED_AMARILLO, HIGH);
  }
  else{
    digitalWrite(LED_AMARILLO, LOW);
  }
  if (SENSOR > 650 && SENSOR < 720){
    digitalWrite(LED_ROJO, HIGH);
  }
  else{
    digitalWrite(LED_ROJO, LOW);
  }  
  delay(1000);
}