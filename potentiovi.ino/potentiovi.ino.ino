#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int ledPin = 9;  //pin 9 has PWM funtion
const int bluePin = A0;
int bright;
int display;


int value;
void setup()
{
 pinMode(ledPin, OUTPUT); 
  pinMode(bluePin, INPUT);
 lcd.init();
 lcd.backlight();
   lcd.print("Brightness:"); 
}
void loop()
{
  lcd.setCursor(0, 1);

 value = analogRead(bluePin);          //Read and save analog value from potentiometer
 bright = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  analogWrite(ledPin, bright);          //Send PWM value to led
  delay(100);    
 display = map(bright, 0, 255, 0, 10); 
    lcd.print(display);
    delay(500);
}

