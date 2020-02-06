#include <Servo.h>
const int trigPin = 10;      //sets up the ultrasonic sensors and variables
const int echoPin = 9;
int duration;
int distance;
Servo myservo;
void setup()
{
 pinMode(echoPin, INPUT);
 pinMode(trigPin, OUTPUT);
 Serial.begin(9600);
 myservo.attach(2);
}
void loop()
{
 Serial.print("distance:");      //prints out the distance on the serial monitor
 Serial.println(distance);
 getDistance();    // initiates the function
 myservo.write(78);
  if (distance <= 10)
  {
   myservo.write(0)//uses the distance function to move the servo while the distance is less than ten
  }
 
}
int getDistance()
{
 digitalWrite(trigPin, LOW);       //function for finding the distance and connects the code to the ultrasonic sensor
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration * (0.034)/2;
 return distance;
}
