#include <IRremote.hpp>
#define BOTON_0 16738455
#define BOTON_1 16724175
#define BOTON_2 16718055
#define BOTON_3 16743045
#define BOTON_4 16716015
#define BOTON_5 16726215
#define BOTON_6 16734885
#define BOTON_7 16728765
#define BOTON_8 16730805
#define BOTON_9 16732845

int receiver = 13;
int v;

IRrecv irrecv(receiver);
decode_results results;
int LED_0 = 2;
int LED_1 = 3;
int LED_2 = 4;
int LED_3 = 5;
int LED_4 = 6;
int LED_5 = 7;
int LED_6 = 8;
int LED_7 = 9;
int LED_8 = 10;
int LED_9 = 11;

void setup() {
  Serial.begin(9600);
  Serial.println("IR FUNCIONANDO");
  irrecv.enableIRIn();
  pinMode (LED_0, OUTPUT);
  pinMode (LED_1, OUTPUT);
  pinMode (LED_2, OUTPUT);
  pinMode (LED_3, OUTPUT);
  pinMode (LED_4, OUTPUT);
  pinMode (LED_5, OUTPUT);
  pinMode (LED_6, OUTPUT);
  pinMode (LED_7, OUTPUT);
  pinMode (LED_8, OUTPUT);
  pinMode (LED_9, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    v=results.value;
    Serial.println("BOTON: ");
    Serial.println(results.value);
    irrecv.resume();
  }
  switch(v){
    case BOTON_0:
    LED_0=!LED_0;
    if(LED_0) {
      digitalWrite(2, HIGH);
    }else{
      digitalWrite(2, LOW);
    }
    break;
        case BOTON_1:
    LED_1=!LED_1;
    if(LED_1) {
      digitalWrite(3, HIGH);
    }else{
      digitalWrite(3, LOW);
    }
    break;
        case BOTON_2:
    LED_2=!LED_2;
    if(LED_2) {
      digitalWrite(4, HIGH);
    }else{
      digitalWrite(4, LOW);
    }
    break;
        case BOTON_3:
    LED_3=!LED_3;
    if(LED_3) {
      digitalWrite(5, HIGH);
    }else{
      digitalWrite(5, LOW);
    }
    break;
        case BOTON_4:
    LED_4=!LED_4;
    if(LED_4) {
      digitalWrite(6, HIGH);
    }else{
      digitalWrite(6, LOW);
    }
    break;
        case BOTON_5:
    LED_5=!LED_5;
    if(LED_5) {
      digitalWrite(7, HIGH);
    }else{
      digitalWrite(7, LOW);
    }
    break;
        case BOTON_6:
    LED_6=!LED_6;
    if(LED_6) {
      digitalWrite(8, HIGH);
    }else{
      digitalWrite(8, LOW);
    }
    break;
        case BOTON_7:
    LED_7=!LED_7;
    if(LED_7) {
      digitalWrite(9, HIGH);
    }else{
      digitalWrite(9, LOW);
    }
    break;
        case BOTON_8:
    LED_8=!LED_8;
    if(LED_8) {
      digitalWrite(10, HIGH);
    }else{
      digitalWrite(10, LOW);
    }
    break;
        case BOTON_9:
    LED_9=!LED_9;
    if(LED_9) {
      digitalWrite(11, HIGH);
    }else{
      digitalWrite(11, LOW);
    }
    break;
  }
  delay (10);
}
