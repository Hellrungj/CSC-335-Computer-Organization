/* ex7.c
   This code made available under the CC0 license.
   http://creativecommons.org/publicdomain/zero/1.0/
   To compile this code, type:
   make ex7
   To run the resulting program, type:
   ./ex7 */
#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE *fp = fopen("book-of-needlework.txt", "r");
  
  char = ch; /* Declare a variable called 'ch' to hold a character. */
  int = vowels; /* Declare a pointer to an array of integers called 'vowels'. */
  char = char malloc[5]; /* Allocate space for five integers in the array. */

    for(i=0; i < sizeof(fp);i++){                                               /* Loop through the file */
                                                                /* Count the number of each vowel you encounter. Store the count of the letter 
                                                                'a' in the zeroth elementof the vowels array, 'e' in the first element of the array, and so on.*/  
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
    printf("%d\n", vowels);             /* Print the number of vowels of each type you encountered */
                              
    printf("\n")                             /* Print a newline */

    return 0;
}