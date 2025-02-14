#include <Arduino.h>

const int motorPin = 3; // Digital pin connected to MOSFET gate

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH); // Turn motor on
  delay(2000); // Wait for 2 seconds
  digitalWrite(motorPin, LOW); // Turn motor off
  delay(2000); // Wait for 2 seconds
}