#include <Arduino.h>

const int motorPin = 3;  // PWM-capable pin for motor control
const int potPin = A0;   // Analog pin connected to potentiometer

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin); // Read potentiometer value (0-1023)
  int speedValue = map(potValue, 0, 1023, 0, 255); // Map to PWM range (0-255)
  analogWrite(motorPin, speedValue); // Set motor speed

}