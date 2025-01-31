#include <Arduino.h>

const int ledPin = 2;
const int potPin = A0;
int potVal;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);
  digitalWrite(ledPin, HIGH);
  delay(potVal);
  digitalWrite(ledPin, LOW);
  delay(potVal);
}