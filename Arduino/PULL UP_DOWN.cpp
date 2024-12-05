int valor;

void setup(){
  pinMode(7,INPUT);
  Serial.begin(9600);
}

void loop() {
  valor = digitalRead(7);
  Serial.println(valor);
}