boolean lightstate = 0;
void setup()
{
	Serial.begin(9600);
	pinMode(2,INPUT_PULLUP);
	pinMode(6,OUTPUT);
	attachInterrupt(digitalPinToInterrupt(2), photo, RISING);

	//attachInterrupt(digitalPinToInterrupt(2), picture, FALLING);
}

void loop()
{
	Serial.println(lightstate); //prints out the variable boolean
	digitalWrite(6, lightstate);
	delay(10);
}

void photo()
{
	lightstate = !lightstate; //interrupts the function and makes it stop
}


