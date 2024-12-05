#include "IRremote.h"
#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8

int receiver = 11;
IRrecv irrecv(receiver);
decode_results results;

void translateIR(){
  switch(results.value){
  case 0xFF6897: Serial.println("0");
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  break;  
  case 0xFF30CF: Serial.println("1");
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  break;  
  case 0xFF18E7: Serial.println("2");
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  break;  
  case 0xFF7A85: Serial.println("3");
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  break;  
  case 0xFF10EF: Serial.println("4");
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  break;  
  case 0xFF38C7: Serial.println("5");
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  break;  
  case 0xFF5AA5: Serial.println("6");
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  break;  
  case 0xFF42BD: Serial.println("7");
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  break;  
  case 0xFF4AB5: Serial.println("8");
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  break;
  case 0xFF52AD: Serial.println("9");
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  break;
  case 0xFFFFFFFF: Serial.println("ERROR");break;  
  default: 
    Serial.println("Otro botón");
  }
  delay(500);
}

void setup() {
  irrecv.enableIRIn();
  for(int i=2 ; i<=8 ; i++){
    pinMode(i,OUTPUT);
  }
}

void loop(){
  if (irrecv.decode(&results)) 
  {
    translateIR(); 
    irrecv.resume();
  }  
}