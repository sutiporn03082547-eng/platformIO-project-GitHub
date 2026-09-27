#include <Arduino.h>

// Uno: built-in LED on pin 13. ESP32 DevKit: often pin 2; check your board.
#ifndef LED_PIN
#define LED_PIN 13
#endif
const unsigned long BLINK_INTERVAL_MS = 300;
unsigned long previousChange = 0;
bool ledOn = false;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);
    Serial.begin(9600);
    Serial.println("Week 12: PlatformIO + GitHub");
    Serial.print("Blink interval (ms): ");
    Serial.println(BLINK_INTERVAL_MS);
}

void loop() {
    const unsigned long now = millis();
    if (now - previousChange >= BLINK_INTERVAL_MS) {
        previousChange = now;
        ledOn = !ledOn;
        digitalWrite(LED_PIN, ledOn ? HIGH : LOW);
        Serial.println(ledOn ? "LED ON" : "LED OFF");
    }
}
