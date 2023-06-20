#if !defined(SIMULATOR_HPP_)
#define SIMULATOR_HPP_

#include "config.hpp"

#if SIMULATOR == 1

#include <stdint.h>
#include <stdio.h>

#include <cstring>

#define SDL_MAIN_HANDLED
#include "../libs/sdl2_w64_mingw32/include/SDL2/SDL.h"
#include "config.hpp"

uint8_t bitRead(uint64_t value, uint8_t position);
typedef uint8_t BYTE;

typedef struct {
  BYTE bRed;
  BYTE bGreen;
  BYTE bBlue;
  BYTE bExtra;
} CRGB;

typedef struct {
  uint8_t width;
  uint8_t height;
} Rect;

class Simulator {
 private:
  SDL_Renderer *renderer;
  SDL_Window *windows;
  Rect square;

  uint32_t events(void);
  uint32_t update_leds(CRGB *leds);

 public:
  Simulator();
  ~Simulator();

  uint32_t begin();
  uint32_t update(CRGB *leds);
};
#endif

#endif  // SIMULATOR_HPP_