/* ex3.c
   This code made available under the CC0 license.
   http://creativecommons.org/publicdomain/zero/1.0/
   To compile this code, type:
   make ex3
   To run the resulting program, type:
   ./ex3
   You may find this Wikibook a useful reference; in particular,
   some of the introductory chapters.
   http://en.wikibooks.org/wiki/C_Programming
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
   int i;  /* Declare a loop variable. */                 /* Declare a variable that is a pointer to an array of characters. */
                                                         /* Hint: if it is a one-dimensional array, then you will need one star. */
   char (*x)[0];                                         /* Allocate enough memory for 26 characters to be stored in the array. Hint: 'malloc' */
   char malloc[26];
   for (i = 26; i > 0; i--){                       /* Loop from 0 to 25. Insert the ASCII values of the letters 'a' through 'z' into the array.*/
      printf ("%d\n", i);                                 /* Loop from 26 to zero. Print each character in the array as you loop down to zero.*/
   }
  printf("/n");                                     /* Print a newline */
  return 0;
}