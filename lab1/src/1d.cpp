#include <Arduino.h>

// Pin definitions
const int photoResistorPin = A0;
const int potentiometerPin = A1;
const int ledPhotoResistor = 2;
const int ledPotentiometer = 4;

void setup() {
    Serial.begin(9600);
    pinMode(ledPhotoResistor, OUTPUT);
    pinMode(ledPotentiometer, OUTPUT);
}

void loop() {
    // Read photoresistor level
    int lightLevel = analogRead(photoResistorPin);
  
    // Turns LED on when photoresistor is covered and off otherwise
    if (lightLevel > 300) {
        digitalWrite(ledPhotoResistor, HIGH);
    } else {
        digitalWrite(ledPhotoResistor, LOW);
    }

    Serial.println(lightLevel);
  
    // Read potentiometer value
    int potValue = analogRead(potentiometerPin);
  
    // Turn LED on if potentiometer is past halfway (512/1024 bits) and off otherwise
    if (potValue > 512) {
        digitalWrite(ledPotentiometer, HIGH);
    } else {
        digitalWrite(ledPotentiometer, LOW);
    }
}