/*
B1 - Text-Logger Program

This is a simple program, for C, that can get your input, and spits it out into a txt file.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to start on the A1 examples, if you haven't already.
*/

#include <stdio.h>

int main() {
    char Text[75];

    printf("Input information to log: ");
    
    // We're going to use something a little different this time. Instead of the default scanf we've been used to, we'll be using fgets, which is like an improved scanf.
    // fgets allows for multi-worded inputs, meaning you can do spaces, although no multi-lined strings.
    // sizeof, checks the size of the variable, in this case, 75 characters.
    // stdin stands for standard input, which allows you to actually input into it.
    // To dumb things down, a LOT, here is practically the arguments inside the function: (Selected-Variable, Variable Size, Read)
    fgets(Text, sizeof(Text), stdin);

    // FILE is a special data type that allows you to create/access files.
    // For this scenario, we'll be naming the variable Fileptr for ease of use, any name works.
    FILE *Fileptr;

    // Using the fopen function allows you to open a file.
    // The a on the second argument stands for APPEND, which adds new information to the end of the file.
    // In this case, there is no file named this in the same directory as the script, so C automatically creates a new file called that, within the same directory/project folder. Typing in precise file paths allows specific paths to create files.
    Fileptr = fopen("log.txt", "a");

    // After trying to open/create a file, you'll always want to check if the file opened successfully.
    if (Fileptr == NULL) {
        printf("Error opening log.txt!\n");

        return 1;
    }

    // fprintf() works the same as printf() but writes into the file.
    fprintf(Fileptr, "%s", Text);

    // Always make sure to close your file when finished to avoid corruption issues.
    fclose(Fileptr);

    printf("Your text has been logged successfully!\n");

    return 0;
}