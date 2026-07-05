#include <Arduino.h>

#define LED_PIN 2   // Built-in LED on most ESP32 DevKit V1 boards

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);

  digitalWrite(LED_PIN, LOW);
  delay(500);
}