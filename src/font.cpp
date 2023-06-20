#include "font.hpp"

#define NUMBER_DIGITS "0123456789"
#define LEN_NUMBER_DIGITS sizeof(NUMBER_DIGITS)

#define ALPHA_UPPER_DIGITS "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define LEN_ALPHA_UPPER_DIGITS sizeof(ALPHA_UPPER_DIGITS)
#define OFFSET_UPPER_DIGITS (LEN_ALPHA_UPPER_DIGITS + LEN_NUMBER_DIGITS)

#define ALPHA_LOWER_DIGITS "abcdefghijklmnopqrstuvwxyz"
#define LEN_ALPHA_LOWER_DIGITS sizeof(ALPHA_LOWER_DIGITS)
#define OFFSET_LOWER_DIGITS (OFFSET_UPPER_DIGITS + LEN_ALPHA_LOWER_DIGITS)

#define ESPECIAL_DIGITS " !@#$%&*()_-=+[]{}|\\/?"
#define LEN_ESPECIAL_DIGITS sizeof(ESPECIAL_DIGITS)

/// @brief
/// @param color
/// @param c
/// @return
const uint8_t *get_char(char c) {
#if USE_FONT_OPEN == 0

  if (c >= '0' && c <= '9') return font8x8[c - '0'];

  if (c >= 'A' && c <= 'Z') return font8x8[c - 'A' + LEN_NUMBER_DIGITS];

  if (c >= 'A' && c <= 'z') return font8x8[c - 'a' + OFFSET_UPPER_DIGITS];

  uint8_t index;
  for (index = OFFSET_LOWER_DIGITS;
       index < OFFSET_LOWER_DIGITS + LEN_ESPECIAL_DIGITS; index++) {
    if (c == ESPECIAL_DIGITS[index]) return font8x8[index];
  }
  return font8x8[OFFSET_LOWER_DIGITS];
#else
  return font8x8_basic[(uint8_t) c];
#endif
}