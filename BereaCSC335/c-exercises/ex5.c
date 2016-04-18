/* ex5.c
   This code made available under the CC0 license.
   http://creativecommons.org/publicdomain/zero/1.0/
   To compile this code, type:
   make ex5
   To run the resulting program, type:
   ./ex5
   This page may help:
   http://www.programmingsimplified.com/c-program-read-file*/
#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fp = fopen("ex1.c", "r");
    char ch; /* Declare a variable called 'ch' to hold a character. */
    int i;
    for(i = 0; i < sizeof(fp);i++){                        /* Loop through the file */
        printf ("%d\n", i);}    /* Print each character as you read it. */
    printf("/n");    /* Print a newline */
    return 0;
}