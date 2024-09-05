int lacthPin = 8;
int clockPin = 13;
int dataPin = 12;
int dt = 500;
int i = 0;
byte numbers[] = {
  0b11111100, //0
  0b01100000, //1
  0b11011010, //2
  0b11110010, //3
  0b01100110, //4   //ABCDEFGX
  0b10110110, //5
  0b10111110, //6
  0b11100000, //7
  0b11111110, //8
  0b11100110, //9
};

void setup() {
  Serial.begin(9600);
  pinMode(lacthPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  digitalWrite(lacthPin, LOW);        
  shiftOut(dataPin,clockPin,LSBFIRST, numbers[i]);
  digitalWrite(lacthPin, HIGH);
  i++;
  delay(dt);
  if(i > 9){
    i = 0;
  }
}