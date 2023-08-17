#ifndef COLOR_HPP
#define COLOR_HPP

#include <stdint.h>

typedef union {
  struct {
    uint8_t blue;
    uint8_t green;
    uint8_t red;
  } channels;
  uint32_t concatened;
} RGB888;

void enviar_uma_cor_todas_pinos(volatile uint8_t *port, RGB888 cor);

#endif  // !COLOR_HPP