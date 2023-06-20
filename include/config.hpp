#ifndef CONFIG_HPP
#define CONFIG_HPP

#ifndef LED_VERT
#define LED_VERT (LINHAS * 8)
#endif

#ifndef LED_HORT
#define LED_HORT (COLUNAS * 8)
#endif

#define N_LEDS (LED_HORT * LED_VERT)

#define BRIGHTNESS 200
#define FRAMES_PER_SECOND 60

#define DATA_PIN 22

#ifndef SIMULATOR
#define SIMULATOR 1
#endif

#endif