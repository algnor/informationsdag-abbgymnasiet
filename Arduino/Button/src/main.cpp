#include <Arduino.h>

#define PIN_BUTTON D6

void Setup() {
  pinMode(PIN_BUTTON, INPUT);
  Serial.begin(115200);
}

void Loop() {
  bool button_state = digitalRead(PIN_BUTTON);
  Serial.println(button_state);
  delay(10);
}
