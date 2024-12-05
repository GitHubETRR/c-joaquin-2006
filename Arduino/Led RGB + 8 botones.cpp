int led_rojo = 13;
int led_verde = 12;
int led_azul = 11;
int boton_1 = 2;
int boton_2 = 3;   
int boton_3 = 4;
int boton_4 = 5;
int boton_5 = 6;   
int boton_6 = 7;
int boton_7 = 8;
int boton_8 = 9;   
bool estado_1 = 0;
bool estado_2 = 0;
bool estado_3 = 0;
bool estado_4 = 0;
bool estado_5 = 0;
bool estado_6 = 0;
bool estado_7 = 0;
bool estado_8 = 0;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}

void loop (){
  estado_1 = digitalRead(boton_1);
  estado_2 = digitalRead(boton_2);
  estado_3 = digitalRead(boton_3);
  estado_4 = digitalRead(boton_4);
  estado_5 = digitalRead(boton_5);
  estado_6 = digitalRead(boton_6);
  estado_7 = digitalRead(boton_7);
  estado_8 = digitalRead(boton_8);

if (estado_1 == HIGH) {
    digitalWrite(led_verde, 255);
    digitalWrite(led_azul, 0);
    digitalWrite(led_rojo, 0);
  } else if (estado_2 == HIGH) {
    digitalWrite(led_verde, 0);
    digitalWrite(led_azul, 255);
    digitalWrite(led_rojo, 0);
  } else if (estado_3 == HIGH) {
    digitalWrite(led_verde, 0);
    digitalWrite(led_azul, 0);
    digitalWrite(led_rojo, 255);
  } else if (estado_4 == HIGH) {
    digitalWrite(led_verde, 0);
    digitalWrite(led_azul, 102);
    digitalWrite(led_rojo, 51);
  } else if (estado_5 == HIGH) {
    digitalWrite(led_verde, 255);
    digitalWrite(led_azul, 0);
    digitalWrite(led_rojo, 255);
  } else if (estado_6 == HIGH) {
    digitalWrite(led_verde, 0);
    digitalWrite(led_azul, 127);
    digitalWrite(led_rojo, 255);
  } else if (estado_7 == HIGH) {
    digitalWrite(led_verde, 128);
    digitalWrite(led_azul, 0);
    digitalWrite(led_rojo, 255);
  } else if (estado_8 == HIGH) {
    digitalWrite(led_verde, 255);
    digitalWrite(led_azul, 255);
    digitalWrite(led_rojo, 255);
  } else {
    digitalWrite(led_verde, 0);
    digitalWrite(led_azul, 0);
    digitalWrite(led_rojo, 0);
  }
}

//usar resistencias de 1K para los 3 pines RED, BLUE, GREEN del led rgb
