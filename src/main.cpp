#include <Arduino.h>

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);

  // Set the built-in LED pin as output (pin 13 on Arduino Nano)
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.println("Hello, World!");
}

void loop() {
  // Blink the built-in LED
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
