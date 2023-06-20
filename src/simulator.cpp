#include "simulator.hpp"

/**
 * @brief Retorna o valor do bit em uma determinada posição de um número inteiro
 * longo sem sinal. Esta função extrai o valor do bit em uma posição específica
 * de um número inteiro longo sem sinal. O valor do bit é retornado como um
 * inteiro de 8 bits (0 ou 1).
 * @param value O número uint64_t sem sinal no qual o bit será lido.
 * @param position A posição do bit a ser lido, onde 0 representa o bit menos
 * significativo.
 * @return O valor do bit na posição especificada (0 ou 1).
 */
uint8_t bitRead(uint64_t value, uint8_t position) {
  return value & (1 << position);
}

Simulator::Simulator(/* args */) {}

Simulator::~Simulator() {}

uint32_t Simulator::begin() {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
    SDL_Log("SDL could not initialize! SDL_Error: %s", SDL_GetError());
    return 1;
  }

  // Create a window
  this->windows = SDL_CreateWindow("Squares Program", SDL_WINDOWPOS_CENTERED,
                                   SDL_WINDOWPOS_CENTERED, SDL_HORT_RES,
                                   SDL_VERT_RES, SDL_WINDOW_RESIZABLE);
  if (this->windows == nullptr) {
    SDL_Log("Window could not be created! SDL_Error: %s", SDL_GetError());
    SDL_Quit();
    return 1;
  }

  // Create a renderer
  this->renderer =
      SDL_CreateRenderer(this->windows, -1, SDL_RENDERER_ACCELERATED);
  if (renderer == nullptr) {
    SDL_Log("Renderer could not be created! SDL_Error: %s", SDL_GetError());
    SDL_DestroyWindow(this->windows);
    SDL_Quit();
    return 1;
  }

  // Clear the renderer
  SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
  SDL_RenderClear(renderer);

  // Update the renderer
  SDL_RenderPresent(renderer);

  square.width = SDL_HORT_RES / LED_HORT;
  square.height = SDL_VERT_RES / LED_VERT;

  return 1;
}

uint32_t Simulator::events() {
  // Process events
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    if (event.type == SDL_WINDOWEVENT) {
      if (event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED) {
        int newWidth = event.window.data1;
        int newHeight = event.window.data2;
        square.width = newWidth / LED_HORT;
        square.height = newHeight / LED_VERT;
      }
    }

    if (event.type == SDL_QUIT) {
      SDL_DestroyRenderer(renderer);
      SDL_DestroyWindow(windows);
      SDL_Quit();
      exit(0);
    }

    if (event.type == SDL_KEYDOWN) {
      if (event.key.keysym.sym == SDLK_c) {
        // Quit event received, exit the program
        // "C" key pressed, exit the program
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(windows);
        SDL_Quit();
        exit(0);
      }
    }
  }
  return 1;
}

uint32_t Simulator::update_leds(CRGB* leds) {
  SDL_RenderClear(renderer);
  // Loop para iterar sobre as linhas de LED (de baixo para cima)
  for (int8_t row = 0; row < LED_VERT; row++) {
    // Loop para iterar sobre as colunas de LED (da direita para a esquerda)
    for (int8_t col = 0; col < LED_HORT; col++) {
      // Obter a cor do LED atual do array de LEDs
      CRGB color = leds[row * LED_HORT + col];
      // Definir a cor de desenho do renderizador como a cor do LED
      SDL_SetRenderDrawColor(renderer, color.bRed, color.bGreen, color.bBlue,
                             SDL_ALPHA_OPAQUE);
      // Definir o retângulo correspondente ao quadrado do LED
      SDL_Rect square_rect = {col * square.width, row * square.height,
                              square.width, square.height};
      // Preencher o retângulo com a cor definida
      SDL_RenderFillRect(renderer, &square_rect);
      // color = {0xFF, 0xFF, 0xFF, 0xFF};
      // Definir a cor de desenho do renderizador como a cor do LED
      // SDL_SetRenderDrawColor(renderer, color.bRed, color.bGreen, color.bBlue,
      //                        SDL_ALPHA_OPAQUE);
      // SDL_RenderDrawRect(renderer, &square_rect);
    }
  }
  // Update the renderer
  SDL_RenderPresent(renderer);
  return 1;
}

/**
 * @brief Atualiza a simulação dos LEDs na janela do simulador.
 *
 * Esta função renderiza os quadrados representando os LEDs na janela do
 * simulador. Recebe como parâmetro o array de LEDs a serem representados e
 * atualiza a janela do simulador de acordo com as cores especificadas nos LEDs.
 *
 * @param leds O array de LEDs a serem representados.
 * @return O valor 1 indicando que a atualização foi concluída com sucesso.
 */
uint32_t Simulator::update(CRGB* leds) {
  this->events();
  this->update_leds(leds);
  // Retorna como sucesso
  return 1;
}
