#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT);
}
//zmiana podpisu
void loop() {  
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);  
  delay(500);         
}
