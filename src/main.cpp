#include <Arduino.h>

#include "FastLED.h"
#include "cor.hpp"
#include "font.hpp"

#define NUMBERS_LEDS (16 * 8)
#define DATA_PIN 22

#define BRIGHTNESS 200
#define FRAMES_PER_SECOND 60

#define COLOR_ORDER GRB
#define CHIPSET WS2812B

bool gReverseDirection = false;

RGB888 cor;

CRGB leds[NUMBERS_LEDS];
CRGBPalette16 gPal;

void setup() {
  // Evita problemas de ficar reinciando
  // delay(3000);
  // Define todos os pinos da porta A como saida
  FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER>(leds, NUMBERS_LEDS)
      .setCorrection(TypicalLEDStrip);
}

void plotCharacter(char character, CRGB color) {
  uint64_t bitmap = color_char(character);
  for (int8_t i = 0; i < 8; i++) {
    for (int8_t j = 0; j < 8; j++) {
      leds[i * 8 + j] = bitRead(bitmap, (7 - i) * 8 + (7 - j)) ? color : CRGB::Black;
    }
  }
  FastLED.show();
}

char c = '0';

void loop() {
  plotCharacter(c++, CRGB::Aqua);
  FastLED.show();
  delay(500);
}