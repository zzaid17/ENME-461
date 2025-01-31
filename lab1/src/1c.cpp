#include <Arduino.h>

// Pin definitions
const int ledPin1 = 2;
const int ledPin2 = 3;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
   // One LED turns on, delay one second
  digitalWrite(ledPin1, HIGH);
  delay(1000);

  // The other LED turns on, delay one second  
  digitalWrite(ledPin2, HIGH);
  delay(1000);

  // Turn off all LEDs
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);

  // One LED blinks five times, one second on, one second off, red turns off
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(1000);
    digitalWrite(ledPin1, LOW);
    delay(1000);
  }

  // The other LED blinks five times, one second on, one second off, green turns off
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin2, HIGH);
    delay(1000);
    digitalWrite(ledPin2, LOW);
    delay(1000);
  }
}