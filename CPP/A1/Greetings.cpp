/*
A1 - Logger Program

This is a simple program, for C++, that can get your input, and give you a greeting.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.
*/

// The iostream file, is the core library when coding in C++, allowing you to create inputs, outputs, and much more.
#include <iostream>

// Using C++, you don't need to worry about work arounds to create strings, but it does take a little effort. Using the string file, you can add built in string capabilities, without manually creating it.
#include <string>

// When creating your main script in C++, it wont read it top to bottom like others might; C++ looks for a function called main, to know where to start actually running its file.

// For now, we won't use any functions besides main, to ease it as much as possible
int main() {
    // Unlike C, C++ doesn't have direct calls of prints and inputs. You need to call std before saying the print/input function names. std stands for standard, so when someone says std::cout, that just means you're calling the standard output.

    // The print function (cout) can receive data/variables to print out data, but not to take in data, like input. We'll have to use a seperate function, which you'll see next.
    std::cout << "Enter your name: ";
    
    // The string type is a built in variable type in C++, allowing for multiple characters to be able to be said for a single variable. This is built into the standard, using help of the string file, so you don't need to mess with variable type manipulation.
    std::string name;

    // The input function (cin) can receive data/variables, and instead of printing it out, changes the variables data to what it received.
    std::cin >> name; 
    
    // Same as outputting information for the name, just using age.
    std::cout << "Enter your age: ";

    // Unlike the string type, although built in as a type of variable in C++ too, doesn't require a library to make it work. Ints are integers, which allow for whole numbers, and is great in this example for ages.
    int age;

    // Same as receiving the input of the name, just using age.
    std::cin >> age;

    // An extension to what was previously said about print, is that you can let it receive data, which was said, but can allow multiple pieces at once in an easy way of usage.
    std::cout << std::endl << "Hello " << name << "! You are " << age << " years old.\n";
    
    // Additional Note(s) \\ 

    // When printing data, we don't want to clump up the output/terminal when debugging or printing. A safe and easy to use operator is endl and \n. The endl and \n variable was seen in the print parts, spacing out the 'Greeting' from 'Information', allowing easier readings for people.
}