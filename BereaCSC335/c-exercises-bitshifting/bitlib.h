#ifndef _BITLIBH
#define _BITLIBH

/**
 * A library of functions for bitwise manipulation
 * of 16-bit numbers.
 * */
 
#include <stdint.h>

/* You can read about enumerated types to understand what
 * is going on here. I've essentially declared a type that 
 * may take on the values left or right. They are not strings;
 * it is a datatype that may only take on those two values.
 * 
 * Useful for capturing cases where there are a finite, disjoint
 * number of possible values; very readable.
 */

/*! Enumerates the direction of bit shifts. */
typedef enum {
  left, /*! Shift bits left. */ 
  right /*! Shift bits right. */
} direction; 

/*! Enumerates the byte to extract from a 16-bit integer. */
typedef enum {
  upper, /*! Extract the upper 8 bits. */ 
  lower /*! Extract the lower 8 bits. */
} byte; 

/*! A boolean true/false enumeration. */
typedef enum {
  true, /*! For use as a true value. */ 
  false /*! For use as a false value. */
} bool;

/**
 * \brief Shifts a 16-bit number left one place.
 * 
 * Takes a sixteen bit number and shifts is left one place.
 * 
 * @code
 * uint16_t result = shift_left_one(0x0F);
 * @endcode
 * 
 * @return uint16_t
 * */
uint16_t shift_left_one (uint16_t number);

/**
 * \brief Shifts a 16-bit number left 'n' places.
 * 
 * Take a sixteen bit number and an integer and shift the
 * sixteen bit value left as many places as specified.
 * 
 * @code
 * uint16_t result = shift_left (0x0F, 3);
 * @endcode
 * 
 * @return uint16_t
 * */
uint16_t shift_left (uint16_t number, int places);

/**
 * \brief Shifts left or right a specified number of places.
 * 
 * Takes a 16-bit number, an integer, and an enumerated
 * constant, and shift the integer left or right a number of
 * places based on the input.
 * 
 * @code
 * uint16_t shifted_left_three = shift (0x0F, 3, left);
 * uint16_t shifted_right_five = shift (0x0F, 5, right);
 * @endcode
 * 
 * @return uint16_t
 * */
uint16_t shift (uint16_t number, int places, direction dir);

/**
 * \brief Returns the upper byte of a 16-bit integer.
 * 
 * Returns an 16-bit value that zeros the lower
 * 8 bits of a 16-bit integer. 
 * 
 * @code
 * uint16_t result = zero_lower (0x3F);
 * @endcode
 * 
 * @return uint16_t
 * */
uint16_t zero_lower (uint16_t number);

/**
 * \brief Returns the lower byte of a 16-bit integer.
 * 
 * Returns an 16-bit value that zeros the upper
 * 8 bits of a 16-bit integer. 
 * 
 * @code
 * uint16_t result = zero_upper (0x3F);
 * @endcode
 * 
 * @return uint16_t
 * */
uint16_t zero_upper (uint16_t number);

/**
 * \brief Zeros the upper or lower half of a 16-bit integer.
 * */
uint16_t zero (uint16_t number, byte b);

/**
 * \brief Gets the upper or lower byte from a 16-bit integer.
 * 
 * Retrieves either the upper or lower 8 bits from a sixteen bit
 * number. When getting the upper 8 bits, they should be shifted
 * down to the LSB position.
 * 
 * Returns an 8-bit value.
 * 
 * @return uint8_t
 * */
uint8_t get_byte (uint16_t number, byte b);

/**
 * \brief Returns true if the nth bit is set.
 * 
 * Takes a 16-bit number, and returns true if the 
 * nth bit is set. 
 * 
 * @code 
 * if (is_bit_set(0x4F, 3) {
 *   ...
 * }
 * @endcode
 * 
 * @return bool
 * */
bool is_bit_set (uint16_t number, int n);

#endif 