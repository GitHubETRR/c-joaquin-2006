int LaserPin = 8;
int Sensor = A0;
int Lectura;

void setup(){
  pinMode(LaserPin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(LaserPin, HIGH);
}

void loop(){
  Lectura = analogRead(Sensor);
  Serial.println(Lectura);
  delay(500);
  if(Lectura < 100){
    Serial.println("Alarma");
  }
}

//resistencia 10k