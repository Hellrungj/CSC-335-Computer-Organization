/* ex2.c
   This code made available under the CC0 license.
   http://creativecommons.org/publicdomain/zero/1.0/
   To compile this code, type:
   make ex2
   To run the resulting program, type:
   ./ex2 */
#include <stdio.h>

int main () {
   int i;                                    /* Declare a loop index variable; I recommend 'ndx' as opposed to 'i' for many reasons.*/
   for ( i = 65; i < 90; i++) {              /* Loop from zero to < 26. */
      printf ("%d\n", i);                    /* Within the loop, print the ASCII values for the characters'A' through 'Z'. You will need to     
                                                search for an ASCII table,and ascertain the value of the letter 'A'*/
   }
  printf("/n");                                  /* Print a newline */
  return 0;
}