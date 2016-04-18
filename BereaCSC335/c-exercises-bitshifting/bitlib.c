/**
 * @file bitlib.c
 * @author Matthew C. Jadud
 * @date October 1, 2014
 * 
 * A library of bit-shift operations that we will 
 * likely use later in our VM implementation.
 * 
 * */

#include "bitlib.h"

uint16_t shift_left_one (uint16_t number) {
  return number << 1;
}

uint16_t shift_left (uint16_t number, int places) {
  return number << places;
}

uint16_t shift (uint16_t number, int places, direction dir) {
  if (dir == left) {
    return number << places;   
  }
  else:
  return number >> places;
}
 
uint16_t zero_lower (uint16_t number) {
  return number << 15;
}

uint16_t zero_upper (uint16_t number) {
  return >> 15;
}

uint16_t zero (uint16_t number, byte b) {
  if (b == upper) {
    return >> 15;
  }
  else:
  return << 15;
}

uint8_t get_byte (uint16_t number, byte b) {
  return number << b;
}

bool is_bit_set (uint16_t number, int n) {
  return false;
}

/* First Challenge Implementation
 * ******************************
 * Add tests for both get_byte and is_bit_set.
 */

/* Second Challenge Implementation
 * *******************************
 * After you have completed implementations of the above functions,
 * circle back around and add in functions that shift right where
 * appropriate. 
 *
 * shift_one_right
 * shift_right
 *
 * You will need to modify bitlib.h to add declarations for
 * these functions.
 * 
 * You will need to modify tests.c to add tests for these functions.
 *
 * You will need to modify bitlib.c to add implementations for
 * each of these functions.
 *
 * If you are successful, you'll have more tools for your
 * virtual machine implementation.
 */