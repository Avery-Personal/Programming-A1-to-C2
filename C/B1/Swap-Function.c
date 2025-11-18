/*
B1 - Swap Program

This is a simple program, for C, that grabs the data of two values and swaps their values via pointers.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to start on the A1-A2 examples, if you haven't already.
*/

#include <stdio.h>

// Pointers in C are types of data that don't directly hold data, but point towards the memory address of another piece of data.
// To use a pointer, you put an asterisk *, before the variable type, to declare it as a pointer.
void swap(int *a, int *b) {
    // Temp stores the value at A's address
    int temp = *a;

    // Similarly said to the temp, in this case, A sets the value of its address to the value of B's address.
    *a = *b;

    // This directly sets the value of B's address to temp, which is A's old one.
    *b = temp;
}

int main() {
    int x = 5;
    int y = 3;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("\nBefore swap:\n");
    printf("x = %d, y = %d\n", x, y);

    // We pass the addresses of x and y to the function using &
    // So in this case, &x gives the memory address of x
    swap(&x, &y);

    printf("\nAfter swap:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}