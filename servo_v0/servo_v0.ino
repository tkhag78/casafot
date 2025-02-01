#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 170;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
 myservo.write(pos);
 pos = pos+1;
 delay(15);
 if (pos = 170){
  pos = 0 ;
 }
}