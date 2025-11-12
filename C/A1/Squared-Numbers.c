/*
A1 - Squared-Numbers

This is a simple program, for C, that can get your input, and spit it out.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to start on the Logger example, if you haven't already.
*/

// Includes the standard I/O file.
#include <stdio.h>

// Creates the main function which will be read off first by the C program.
int main() {
    // Print information, in this case, just asking for a number to square.
    printf("Number to square: ");

    // There are many variable types in C, int is an integer, which only allows WHOLE numbers.
    int number;

    // %d stands for an integer placeholder, as we're waiting for an integer value inside of it.
    scanf("%d", &number);

    // *= in C stands for multiply & assign. So this code is the equivalent of number = number * number
    number *= number;
    // number = number * number, to dumb it down.

    // %i stands for integer, because number has a value now, it doesn't require a placeholder value.
    printf("\nThe value squared is: %i", number);
    

    // Additional Notes \\ 

    /*
    There are MULTIPLE variable types, for being able to remember, here are all the basic ones:
      %c - Character
      %s - String

      %i - Integer
      %f - Float
      %d - Integer Placeholder
    */
}