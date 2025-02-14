#include <Arduino.h>
#include <Servo.h>

Servo labservo; // Create Servo object

const int servoPin = 9; // PWM pin for servo control

void setup() {
  labservo.attach(servoPin);
}

void loop() {
  for (int angle = 0; angle <= 180; angle += 5) { // Move forward
    labservo.write(angle);
    delay(50);
  }

  for (int angle = 180; angle >= 0; angle -= 5) { // Move back
    labservo.write(angle);
    delay(50);
  }
}