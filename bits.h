#ifndef BITS_H
#define BITS_H

#include <stdint.h>

/**
 * @brief Sets a specific bit in a 32-bit register
 * @param reg Pointer to the target register
 * @param bit Bit position to set (0-31)
 * @note No operation if bit > 31
 */
void set_bit(uint32_t *reg, uint8_t bit);

/**
 * @brief Clears a specific bit in a 32-bit register
 * @param reg Pointer to the target register
 * @param bit Bit position to clear (0-31)
 * @note No operation if bit > 31
 */
void clear_bit(uint32_t *reg, uint8_t bit);

/**
 * @brief Toggles a specific bit in a 32-bit register
 * @param reg Pointer to the target register
 * @param bit Bit position to toggle (0-31)
 * @note No operation if bit > 31
 */
void toggle_bit(uint32_t *reg, uint8_t bit);

/**
 * @brief Reads the value of a specific bit in a 32-bit register
 * @param reg Pointer to the target register
 * @param bit Bit position to read (0-31)
 * @return 1 if bit is set, 0 if cleared or if bit > 31
 */
uint8_t read_bit(uint32_t *reg, uint8_t bit);

#endif