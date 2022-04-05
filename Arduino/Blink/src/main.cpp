#include <Arduino.h>

#define LED_PIN D6

bool g_State = 0;

void Setup() {
  pinMode(LED_PIN, OUTPUT);
}

void Loop() {
  digitalWrite(LED_PIN, g_State);
  state = !state;
}

