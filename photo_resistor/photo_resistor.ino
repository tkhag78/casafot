
#include <Servo.h>

Servo myservo; 

int photoResistorPin = A0;  // initialize analog pin A0, connected with photoresistor
int ledPin = 11;  // initialize digital pin 11, connected with LED
int leddly = 8;  // initialize digital pin 11, connected with LED
int val = 0;  // initialize variable val to store the sensor value
int ton = 0;
int pin2input = 0;

void setup() {
  pinMode(ledPin, OUTPUT);  // set digital pin 11 as output
  pinMode(leddly, OUTPUT);  // set digital pin 8 as output
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);  // set baud rate at 9600
  myservo.write(90);
  pinMode(2, INPUT_PULLUP);

  
}


void loop() {


  val = analogRead(photoResistorPin);  // read the value from the photoresistor and assign it to val
  Serial.println(val);  // print the value for debugging

  delay(10);  // wait for 0.01 seconds

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
   

  pin2input =  digitalRead(2); 
  if(pin2input = 0){
   myservo.write(90);
   }




if (ton > 500) {  // change the threshold value based on your specific lighting conditions
    digitalWrite(leddly, LOW); 
    myservo.write(0); // turn off the LED if it's too bright
  } 
  else {
    digitalWrite(leddly, HIGH); 
   
  }

}
