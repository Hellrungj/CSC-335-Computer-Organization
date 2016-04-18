/* ex1.c
   This code made available under the CC0 license.
   http://creativecommons.org/publicdomain/zero/1.0/
   To compile this code, type:      make ex1
        To run the resulting program, type:
        ./ex1    */
#include <stdio.h>


int main () {       /* Declare two integers, 'x' and 'y'. */
  int x, y;         /* Assign values to those two integers. Your choice of values should total to 42.*/
  x = 20;
  y = 22;           /* Store the sum of x and y back into x. */
  x = x + y;     /* Print the value of x using a printf statement. */
  printf ("%d\n", x);
  return 0;
}