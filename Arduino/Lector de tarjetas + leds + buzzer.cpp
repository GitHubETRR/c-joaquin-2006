#include <SPI.h>     
#include <MFRC522.h>     

#define RST_PIN  5     
#define SS_PIN  53   
int LED_ROJO = 2;
int LED_VERDE = 3;  
#define BUZZER 22

MFRC522 mfrc522(SS_PIN, RST_PIN); 

byte LecturaUID[4];        
byte Usuario1[4]= {0xD3, 0xF9, 0xB0, 0x1E} ;    
byte Usuario2[4]= {0x95, 0x71, 0x7D, 0x21} ;   

void setup() {
  Serial.begin(9600);     
  SPI.begin();       
  mfrc522.PCD_Init();    
  Serial.println("Listo");
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);  
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  if ( ! mfrc522.PICC_IsNewCardPresent())   
    return;           
  
  if ( ! mfrc522.PICC_ReadCardSerial())     
    return;           
    
    Serial.print("UID:");      
    for (byte i = 0; i < mfrc522.uid.size; i++) { 
      if (mfrc522.uid.uidByte[i] < 0x10){  
        Serial.print(" 0");      
        }
        else{           
          Serial.print(" ");       
          }
          Serial.print(mfrc522.uid.uidByte[i], HEX);    
          LecturaUID[i]=mfrc522.uid.uidByte[i];          
          }
          
          Serial.print("\t");                     
                    
          if(comparaUID(LecturaUID, Usuario1)) {
             Serial.println("Bienvenido Joaquin Viani"); 
             digitalWrite(LED_ROJO, LOW);
             digitalWrite(LED_VERDE, HIGH);
             digitalWrite(BUZZER, LOW);
          } else if(comparaUID(LecturaUID, Usuario2)) {
            Serial.println("Bienvenido Alejandro Viani");
             digitalWrite(LED_ROJO, LOW);
             digitalWrite(LED_VERDE, HIGH);
             digitalWrite(BUZZER, LOW);
          } else {
            Serial.println("Negado");  
             digitalWrite(LED_ROJO, HIGH);
             digitalWrite(LED_VERDE, LOW);
             digitalWrite(BUZZER, HIGH);
            mfrc522.PICC_HaltA();   
          }    
                  
               
}

boolean comparaUID(byte lectura[],byte usuario[]) 
{
  for (byte i=0; i < mfrc522.uid.size; i++){    
  if(lectura[i] != usuario[i])        
    return(false);          
  }
  return(true);       
}