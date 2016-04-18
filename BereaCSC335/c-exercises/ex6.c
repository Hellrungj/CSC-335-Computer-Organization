/* ex6.c
   This code made available under the CC0 license.
   http://creativecommons.org/publicdomain/zero/1.0/
   To compile this code, type:
   make ex6
   To run the resulting program, type:
   ./ex6*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE *fp = fopen("book-of-needlework.txt", "r");
  
  char = ch; /* Declare a variable called 'ch' to hold a character. */
  int = vowels, i; /* Declare a variable called 'vowels' to hold an integer. *//* Loop through the file */
  for (i = 0; i < sizeof(fp); i++){ /* Count the number of vowels you encounter */
    if i == 'A' or i == "a"{
        vowels =+ 1}
    else if i == "E" or i == "e"{
        vowels =+ 1}
    else if i == "I" or i == "i"{
        vowels =+ 1}
    else if i == "O" or i == "o"{
        vowels =+ 1}
    else if i == "U" or i == "u"{
        vowels =+ 1}
    else if i == "Y" or i == "y"{
        vowels =+ 1}
    else{
        printf("non-vowels")
    }
  }
  printf("%d\n", vowels);/* Print the number of vowels you encountered */
  
  /* Print a newline */
    printf("/n");
  return 0;
}