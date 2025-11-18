/*
A1 - Multiplied-Numbers

This is a simple program, for C++, that can get your input, and multiply it.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to start on the Greetings example, if you haven't already.
*/

// Includes the standard I/O file.
#include <iostream>

// Creates the main function which will be read off first by the C++ program.
int main() {
    // Print information, in this case, just asking for a number to multiple.
    std::cout << "1st number to multiply: ";

    // There are many variable types in C++, int is an integer, which only allows WHOLE numbers.
    int A;
    int B;

    std::cin >> A;
    
    std::cout << "2nd number to multiply: ";
    std::cin >> B;

    // *= in C++ stands for multiply & assign. So this code is the equivalent of number = number * number
    A *= B;
    // number = number * number, to dumb it down.

    // %i stands for integer, because number has a value now, it doesn't require a placeholder value.
    std::cout << "The answer is: " << A << std::endl;
}