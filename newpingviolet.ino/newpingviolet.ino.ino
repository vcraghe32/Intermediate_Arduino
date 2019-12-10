#include <NewPing.h>
 
#define TRIGGER_PIN 10
#define ECHO_PIN 9
#define MAX_DISTANCE 200
int buttonpin = 2;
 
NewPing myHC_SR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
 Serial.begin(9600);
}
 
void loop() {
    
     if (digitalRead(buttonpin) == HIGH){
     	Serial.println(myHC_SR04.ping_cm());
     delay(50); }
}
