/*
A1 - Logger Program

This is a simple program, for C, that can get your input, and spit it out.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.
*/

// The stdio.h file, is the core library when coding in C, allowing you to create inputs, outputs, and much more.
#include <stdio.h>

// When creating your main script in C, it wont read it top to bottom like others might; C looks for a function called main, to know where to start actually running its file.

// For now, we won't use any functions besides main, to ease it as much as possible
int main() {
    // The print function (printf) can receive data/variables to print out data, but not to take in data, like input. We'll have to use a seperate function, which you'll see next.
    printf("Information to log: ");
    
    // The char type is a built in variable type in C, that allows a singular letter to be added.
    // Whenever you add an array, the brackets [], to the end of the variable name, it allows storage of MULTIPLE characters, this is a work around for strings, as C doesn't naturally support it.
    // As a simple test, the Info's character capacity is only 25, for testing purposes.
    char Info[25];

    // The scan function (scanf) can receive data/variables, and instead of printing it out, changes the variables data to what it received.
    // A quirk about C is that even if I put an array to a max of 25 (24 including the null terminator), C will still allow it to go as high as you want. Another work around, similar to strings with arrays, is typing the max characters you want after the % symbol. The percent symbol is a simple operator in C that is used to ask for the variable type, in this case, we use %24s, which when simplified to %s, is a string variable. In this example, we are asking for the user, to input a string, with a max of 24 characters.
    scanf("%24s", Info);

    // An extension to what was previously said about print, is that you can let it receive data, which was said, but just like the scan function, we will be using %s, a string; %s is used here, and no specific variant, like %24s like last time, because we are outputting the whole variable, not asking for a specific value.
    printf("\nInformation: %s", Info);

    // Additional Note(s) \\ 
    
    // printf and scanf, stand for print formatted (formatted print) and scan formatted (formatted scan). This is why you can use a format specifier, which is what we described with %, to format specific data into clean ways of reading.

    // When printing data, we don't want to clump up the output/terminal when debugging or printing. A safe and easy to use operator is \n. The \n variable was seen in the printf of information, spacing out the 'Info to log' from 'Info', allowing easier readings for people.
}