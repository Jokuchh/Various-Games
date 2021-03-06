#include "mastermind.h"
#include "lcd_wrapper.h"

void setup()
{
  pinMode(LED_BLUE_1, OUTPUT);
  pinMode(LED_RED_1, OUTPUT);
  pinMode(LED_BLUE_2, OUTPUT);
  pinMode(LED_RED_2, OUTPUT);
  pinMode(LED_BLUE_3, OUTPUT);
  pinMode(LED_RED_3, OUTPUT);
  pinMode(LED_BLUE_4, OUTPUT);
  pinMode(LED_RED_4, OUTPUT);
  lcd_init();
}

void loop() {
  char* code = generate_code(false, 4);
  play_game(code);
  free(code);
}
