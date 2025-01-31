/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int lzr_1 = 8;
int lzr_2 = 9;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(lzr_1, INPUT);
  pinMode(lzr_2, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(lzr_2, LOW); 
  delay(1200);   
  digitalWrite(lzr_2, HIGH); 
  delay(0);   
  pinMode(lzr_1, OUTPUT);  
  digitalWrite(lzr_1, LOW); 
  delay(1200);      
  pinMode(lzr_1, INPUT);                // wait for a second
   delay(0);                      // wait for a second
  // turn the LED off by making the voltage LOW
}
