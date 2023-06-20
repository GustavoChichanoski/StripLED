#if SIMULATOR == 0
#include <Arduino.h>

#include "FastLED.h"
#else
#include "simulator.hpp"
#endif

#include <stdio.h>

#include "config.hpp"
#include "font.hpp"

#define COLOR_ORDER GRB
#define CHIPSET WS2812B
#define NUMBER_LEDS (NUMBER_LED_HORIZONTAL * NUMBER_LED_VERTICAL)

void loop();

bool gReverseDirection = false;

CRGB leds[N_LEDS];
Simulator sim;

const CRGB BLACK = {0xFF, 0xFF, 0xFF, 0xFF};

/**
 * Converts a uint32_t value to a CRGB struct.
 *
 * @param value The uint32_t value to convert.
 * @return The converted CRGB struct.
 */
CRGB convert_uint32_to_CRGB(uint32_t value);

CRGB convert_uint32_to_CRGB(uint32_t value) {
  CRGB color;

  color.bRed = (value >> 16) & 0xFF;
  color.bGreen = (value >> 8) & 0xFF;
  color.bBlue = value & 0xFF;
  color.bExtra = 0x00;

  return color;
}

#if SIMULATOR == 0
void fast_led(void) {
  FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER>(leds, N_LEDS);
  FastLED.setCorrection(TypicalLEDStrip);
}
#endif

int main() {
#if SIMULATOR == 0
  fast_led();
#else
  sim.begin();
  while (true) {
    loop();
  }
#endif
  return 0;
}

typedef struct stPoint {
  uint16_t x;
  uint16_t y;
} Point;

bool valid_led(Point led) { return (led.x < LED_HORT && led.y < LED_VERT); }

/**
 * @brief Plota um caractere em uma matriz de LEDs.
 *
 * Esta função plota um caractere especificado em uma matriz de LEDs
 * representada por um array de LEDs. O caractere é desenhado na cor
 * especificada a partir da posição de cursor fornecida.
 *
 * @param character O caractere a ser plotado.
 * @param color A cor do caractere.
 * @param cursor O ponto de partida para o desenho do caractere.
 */
void plotCharacter(char character, uint32_t color, Point* cursor) {
  const uint8_t* bitmap = get_char(character);
  Point cursor_current, cursor_char;
  uint16_t led;
  for (cursor_char.y = 0; cursor_char.y < FONT_SIZE; cursor_char.y++) {
    uint8_t map = bitmap[cursor_char.y];
    for (cursor_char.x = 0; cursor_char.x < FONT_SIZE; cursor_char.x++) {
      cursor_current.x = cursor->x + cursor_char.x;
      cursor_current.y = cursor->y + cursor_char.y;
      if (!valid_led(cursor_current)) continue;
      led = cursor_current.y * LED_HORT + cursor_current.x;
      if (!(map & (1 << cursor_char.x))) {
        leds[led] = convert_uint32_to_CRGB(0);
        continue;
      }
      leds[led] = convert_uint32_to_CRGB(color);
    }
  }
}

void plotString(const char* str, uint32_t color, Point* cursor) {
  uint8_t position = 0;
  Point offset = *cursor;

  while (str[position] != '\0') {
    plotCharacter(str[position++], color, &offset);
    offset.x += FONT_SIZE;
    if (!valid_led(offset)) break;
  }
}

Point p = {0, 0};

void loop() {
  p.y = 0;
  p.x = (p.x > -LED_HORT) ? p.x - 1 : 0;
  plotString("Gustavo", 0xFF0000, &p);
  p.y = FONT_SIZE;
  plotString("Chichanoski", 0x007F7F, &p);
  sim.update(leds);
  SDL_Delay(100);
}
