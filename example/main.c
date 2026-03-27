#include <stdio.h>
#include "bits.h"

int main() {
  uint32_t reg = 0;

  set_bit(&reg, 5);
  printf("set_bit(&reg, 5) == 0x%08X\n", reg);

  clear_bit(&reg, 5);
  printf("clear_bit(&reg, 5) == 0x%08X\n", reg);

  toggle_bit(&reg, 5);
  printf("toggle_bit(&reg, 5) == 0x%08X\n", reg);

  toggle_bit(&reg, 6);
  printf("toggle_bit(&reg, 6) == 0x%08X\n", reg);
  
  printf("read_bit(5) == %d\n", read_bit(&reg, 5));
  printf("read_bit(6) == %d\n", read_bit(&reg, 6));

  return 0;
}