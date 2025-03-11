
#include <Servo.h>

Servo myservo; 

int photoResistorPin = A0;  // initialize analog pin A0, connected with photoresistor
int ledPin = 11;  // initialize digital pin 11, connected with LED
int leddly = 8;  // initialize digital pin 11, connected with LED
int relockPin = 2;  // initialize digital pin 11, connected with LED
int val = 0;  // initialize variable val to store the sensor value
int ton = 0;
int relockInput = 0;

void setup() {
  pinMode(ledPin, OUTPUT);  // set digital pin 11 as output
  pinMode(leddly, OUTPUT);  // set digital pin 8 as output
  pinMode(relockPin, INPUT_PULLUP); // Set digital pin 2 as input with weak pull-up
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);  // set baud rate at 9600 - serial debugging
  myservo.write(90); // Push the servo to the lock position
   
}


void loop() {


  val = analogRead(photoResistorPin);  // read the value from the photoresistor and assign it to val
  Serial.println(val);  // print the value for debugging

  delay(10);  // wait for 0.01 seconds

  if (val > 250) {  // change the threshold value based on your specific lighting conditions
    digitalWrite(ledPin, LOW);  // turn off the LED if it's too bright
    ton = ++ton;
  } 

  else {
    digitalWrite(ledPin, HIGH); 
    
    if (ton > 250) {  // change the threshold value based on your specific lighting conditions
      ton = 249;
    } 
  
   if (ton > 0) {  // change the threshold value based on your specific lighting conditions
    ton = --ton;
    } 
  else {
    ton = 0;
 
    }
  }
   

  relockInput =  digitalRead(relockPin); 
  //Serial.println(relockInput);  // print the value for debugging

  if(relockInput == 0){
   myservo.write(90);
   }




if (ton > 250) {  // change the threshold value based on your specific lighting conditions
    digitalWrite(leddly, LOW); 
    myservo.write(0); // turn off the LED if it's too bright
  } 
  else {
    digitalWrite(leddly, HIGH); 
   
  }

}
