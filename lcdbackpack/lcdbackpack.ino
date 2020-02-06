#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{

	lcd.init();
	lcd.backlight();
	lcd.print("hello, world!"); //print out hello world at the start of the function
}

void loop()
{
	lcd.setCursor(0, 1);
	lcd.print(millis() / 1000);  //prints out the seconds since the beginning of the code
	delay(100);

}
