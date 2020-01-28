const int dialpin = A5;
const int diodepin = A4;
int value;
int speed;
void setup()
{
    pinMode(dialpin, INPUT);
    pinMode(diodepin, OUTPUT);
    
}

void loop()
{
 value = analogRead(dialpin);      //Read and save analog value from potentiometer
 //speed = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  analogWrite(diodepin, value);          //Send PWM value to led
  delay(100);    

    delay(500);    
}
