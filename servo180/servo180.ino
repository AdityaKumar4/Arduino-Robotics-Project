#include <Servo.h>

#include<servo.h>
Servo myservo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
for(int pos = 0; pos <= 180; pos--){
  myservo.write(pos);
  delay(10);
}
for(int pos = 0; pos <= 180; pos--){
  myservo.write(pos);
  delay(10);
}
}
