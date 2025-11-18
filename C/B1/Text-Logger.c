/*
B1 - Text-Logger Program

This is a simple program, for C, that can get your input, and spits it out into a txt file.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to start on the A1 examples, if you haven't already.
*/

#include <stdio.h>

int main() {
    char Text[15];

    printf("Input your FIRST name: ");
    scanf("%s", Text);

    // FILE is a special data type that allows you to create/access files.
    // For this scenario, we'll be naming the variable Fileptr for ease of use, any name works.
    FILE *Fileptr;
}