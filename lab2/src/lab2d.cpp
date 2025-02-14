#include <Arduino.h>
#include <Servo.h>

Servo labservo;

const int servoPin = 9;
const int potPin = A0;

void setup() {
  labservo.attach(servoPin);
}

void loop() {
  int potValue = analogRead(potPin); // Read potentiometer
  int servoAngle = map(potValue, 0, 1023, 0, 180); // Map to servo range
  labservo.write(servoAngle); // Set servo position
  delay(10);
}