/*
 keyestudio super learning kit
 Project 10
 Photo Resistor
 http://www.keyestudio.com
*/

int photoResistorPin = A0;  // initialize analog pin A0, connected with photoresistor
int ledPin = 11;  // initialize digital pin 11, connected with LED
int leddly = 8;  // initialize digital pin 11, connected with LED
int val = 0;  // initialize variable val to store the sensor value
int ton = 0;


void setup() {
  pinMode(ledPin, OUTPUT);  // set digital pin 11 as output
  pinMode(leddly, OUTPUT);  // set digital pin 11 as output
  Serial.begin(9600);  // set baud rate at 9600
}


void loop() {


  val = analogRead(photoResistorPin);  // read the value from the photoresistor and assign it to val
  Serial.println(val);  // print the value for debugging

  delay(10);  // wait for 0.01 seconds

  // Adjust the threshold value to a valid range of 0-1023
  if (val > 350) {  // change the threshold value based on your specific lighting conditions
    digitalWrite(ledPin, LOW);  // turn off the LED if it's too bright
    ton = ++ton;

  } 
  else {
    digitalWrite(ledPin, HIGH); 
    
    if (ton > 500) {  // change the threshold value based on your specific lighting conditions
    ton = 499;
  } 
  
   if (ton > 0) {  // change the threshold value based on your specific lighting conditions
    ton = --ton;
  } 
  else {
    ton = 0;
    
  }
  }
   




if (ton > 500) {  // change the threshold value based on your specific lighting conditions
    digitalWrite(leddly, LOW);  // turn off the LED if it's too bright
  } 
  else {
    digitalWrite(leddly, HIGH); 
    
  }
}

