#include <Arduino.h>

#define LED_RED D7
#define LED_YELLOW D5
#define LED_GREEN D6

enum State { red, red_yellow, yellow, green };

State g_CurrentState = red;

void Setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void Loop() {
  switch (g_CurrentState) {
  case red:
    digitalWrite(LED_RED, true);
    digitalWrite(LED_YELLOW, false);
    digitalWrite(LED_GREEN, false);
    break;
  case red_yellow:
    digitalWrite(LED_RED, true);
    digitalWrite(LED_YELLOW, true);
    digitalWrite(LED_GREEN, false);
    break;
  case yellow:
    digitalWrite(LED_RED, false);
    digitalWrite(LED_YELLOW, true);
    digitalWrite(LED_GREEN, false);
    break;
  case green:
    digitalWrite(LED_RED, false);
    digitalWrite(LED_YELLOW, false);
    digitalWrite(LED_GREEN, true);
    break;
  }
}
