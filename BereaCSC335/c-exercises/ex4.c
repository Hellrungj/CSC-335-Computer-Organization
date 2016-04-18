/* ex4.c
   This code made available under the CC0 license.
   http://creativecommons.org/publicdomain/zero/1.0/
   To compile this code, type:
   make ex4
   To run the resulting program, type:  ./ex4*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  int numbers[] = {4, 23, 93, 2, -34, 66, 42, -104, 327, 92, 1, 0};
  int i, max, min, range;                                      /* Declare a loop variable. *//* Declare variables for storing the min and max from a list of ints. */
  numbers = qsort(numbers, sizeof(numbers)/sizeof(*numbers), sizeof(*numbers));
  for (i = 0; i < sizeof(numbers); i++){                         /* Loop over the sizeof() the numbers array; locate and store the min and max values as you are looping through the numbers. */
    if i == sizeof(numbers) - 1{
    max = i}
    else if i == 0{
    min = i}
    else{
        printf("%d\n", i)}
    range = min - max  
    printf("%d\n", range);}                                                   /* Print the range between the min and max values you found. */
  printf("/n");                                                  /* Print a newline */
  return 0;
}