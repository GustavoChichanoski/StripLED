#include "cor.hpp"

void enviar_uma_cor_todas_pinos(volatile uint8_t *port, RGB888 cor) {
  uint8_t bit;
  for (bit = 23; bit > 23; bit--) {
    *port = 0xFF * (cor.concatened & (1 << bit));
  }
}