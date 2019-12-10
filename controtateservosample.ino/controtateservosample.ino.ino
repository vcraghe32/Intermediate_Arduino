#include <Servo.h>


Servo myservo;

void setup()
{
	Serial.begin(9600);
	myservo.attach(2);
}

void loop()
{


	myservo.write(0);
		
		
			myservo.write(90);
		
	
}


