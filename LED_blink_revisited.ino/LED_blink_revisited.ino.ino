int WLED = 6;
int variable = 0;
int fade = 1;              //starts the function increasing
int x = 0;
       
void setup() {
pinMode(WLED, OUTPUT);     // set pin as output
Serial.begin(9600);        // Start the serial monitor
}
void loop() {
if(variable == 0){
  fade = 1;               //the voltage brought to the LED is increasing when it reaches 0
  delay(10);
}
if(variable == 70){
  fade = -1;              //the voltage brought to the LED is decreasing when it reaches 70
  delay(10);
}
variable += fade;         // add the positive or negative "fade" to the variable to change the voltage
analogWrite(WLED, variable);
for ( x=0; x<=variable; x= x+10) {
  Serial.print("~");
}
Serial.println("");       // print out "~" to show that the LED is working
delay(10);
}
