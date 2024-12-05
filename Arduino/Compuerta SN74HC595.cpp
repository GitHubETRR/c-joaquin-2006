int lacthPin = 8;
int clockPin = 13;
int dataPin = 12;
byte myByte1 = 0b00001111;
byte myByte2 = 0b11110000;
byte myByte3 = 0b00000000;
byte myByte4 = 0b11111111;
int dt = 500;

void setup() {
  Serial.begin(9600);
  pinMode(lacthPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  digitalWrite(lacthPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST, myByte1);
  digitalWrite(lacthPin, HIGH);
  delay(dt);
  digitalWrite(lacthPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST, myByte2);
  digitalWrite(lacthPin, HIGH);
  delay(dt);
    digitalWrite(lacthPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST, myByte3);
  digitalWrite(lacthPin, HIGH);
  delay(dt);
  digitalWrite(lacthPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST, myByte4);
  digitalWrite(lacthPin, HIGH);
  delay(dt);
  
}

