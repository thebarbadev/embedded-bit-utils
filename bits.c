/**
 * @file bits.c
 * @brief Bit manipulation library for embedded systems
 *
 * Provides low-level bit operations for 32-bit registers,
 * simulating direct hardware register access as used in
 * STM32 microcontrollers.
 */

#include "bits.h"

void set_bit(uint32_t *reg, uint8_t bit) {
  if(bit > 31) return;
  *reg |= (1UL << bit);
}

void clear_bit(uint32_t *reg, uint8_t bit) {
  if(bit > 31) return;
  *reg &= ~(1UL << bit);
}

void toggle_bit(uint32_t *reg, uint8_t bit) {
  if(bit > 31) return;
  *reg ^= (1UL << bit);
}

uint8_t read_bit(uint32_t *reg, uint8_t bit) {
  if(bit > 31) return 0;
  return (*reg >> bit) & 1UL;
}