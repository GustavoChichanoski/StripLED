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

uint64_t vector2uint64_t(const uint8_t *vector) {
  uint64_t result = 0;
  result |= static_cast<uint64_t>(vector[7]) << (8 * 7);
  result |= static_cast<uint64_t>(vector[6]) << (8 * 6);
  result |= static_cast<uint64_t>(vector[5]) << (8 * 5);
  result |= static_cast<uint64_t>(vector[4]) << (8 * 4);
  result |= static_cast<uint64_t>(vector[3]) << (8 * 3);
  result |= static_cast<uint64_t>(vector[2]) << (8 * 2);
  result |= static_cast<uint64_t>(vector[1]) << (8 * 1);
  result |= static_cast<uint64_t>(vector[0]) << (8 * 0);
  return result;
}

/// @brief
/// @param color
/// @param c
/// @return
uint64_t color_char(uint32_t color, char c) {
#if USE_FONT_OPEN == 0

  if (c >= '0' && c <= '9') return vector2uint64_t(font8x8[c - '0']);

  if (c >= 'A' && c <= 'Z')
    return vector2uint64_t(font8x8[c - 'A' + LEN_NUMBER_DIGITS]);

  if (c >= 'A' && c <= 'z')
    return vector2uint64_t(font8x8[c - 'a' + OFFSET_UPPER_DIGITS]);

  uint8_t index;
  for (index = OFFSET_LOWER_DIGITS;
       index < OFFSET_LOWER_DIGITS + LEN_ESPECIAL_DIGITS; index++) {
    if (c == ESPECIAL_DIGITS[index]) return vector2uint64_t(font8x8[index]);
  }
  return vector2uint64_t(font8x8[OFFSET_LOWER_DIGITS]);
#else
  return font[(uint8_t)c];
#endif
}