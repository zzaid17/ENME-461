#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  int ledPin = 2;
  int potPin = A0;
  int potVal;
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);
  digitalWrite(ledPin, HIGH);
  delay(potVal);
  digitalWrite(ledPin, LOW);
  delay(potVal);
}