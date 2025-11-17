/*
A2 - Mini-Calculator

This is a simple program, for C, that gets your inputted information via a struct, and outputs it cleanly.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to start on the A1 examples, if you haven't already.
*/

// This is a VERY heavy project, you will learn:

/*

- If Statements
- Switches
- Loop & Types
- Function & Types
- Returning

*/

#include <stdio.h>

// When creating functions in C, they either expect a type of value to return, of to just be used without returning.
// In this scenario, to teach you as much as possible before getting into B1, we'll be using a function that returns a value.
// We're using float before the function, to say we'll be returning and float value somewhere throughout the code.
// Due to using an float for the return type, if we ever try to return another value, lets say a string, it will cause an error due to it not being an float.
// Inside the parentheses of the function, you can add arguments, which are pieces of data you can feed into the function.
float ExecuteOperation(char operator, float A, float B) {
    // The switch keyword allows you to get a variable, and switch between values to find the right one, to put it simply.
    switch (operator) {
        // Cases are the keywords you use to check if the variable is equal to said value.
        case '+':
            // Using the return keyword, you can return a singular value, in this case since we're adding, we'll return A + B. We'll continue this for the next couple pieces of information.
            return A + B;
        case '-':
            return A - B;
        case '*':
            return A * B;
        case '/':
            // If statements or similar to for loops as we discussed earlier, as we're checking if our condition is true or false.
            // Instead of going through multiple times, if statements will go through with what's inside it if it's value is true.
            // Most if statements require braces, but if you're only making a one liner, C allows you to not do braces, and indent the next piece of code to be inside the if statement.
            if (B != 0)
                return A / B;
            
            printf("Cannot divide by 0");
            break;
    }

    return 0;
}

int main() {
    char Operator;
    float A, B;

    printf("====== Mini-Calculator ======\n\n");
    printf("Help:\n  Addition: +\n  Subtraction: -\n  Multiplication: *\n  Division: /\n  EXIT: q");

    // Another loop, which is the second type you'll learn this unit, is the while loop. They convey a less conditional way of looping.
    // While loops are used to be ran while something is true, unlike for loops which are meant for how many times you want something.
    // Using do before while allows the chunk of code to run atleast ONCE before checking the condition.
    
    do {
        printf("\n\nEnter Mode: ");
        scanf(" %c", &Operator);

        // Unlike the first if statement, this will be a multi-lined if statement, meaning we'll need braces, but now it won't be indent specific.
        if (Operator == '+') {
            printf("\nNumbers to ADD:\n");

            printf("  A: ");
            scanf("%f", &A);

            printf("  B: ");
            scanf("%f", &B);

            // When creating variables, you're actually allowed to make them the returned value of functions, hence why we made the execute function return a value.
            float Result = ExecuteOperation(Operator, A, B);

            printf("%f %c %f = %f", A, Operator, B, Result);
        } // When finishing an if statement, you might want another outcome if it isnt true to what you wanted it to be, C allows you to use else after the if statement to say if not that, then resort to this.
        // Using that, you can create another if after the else, to create an else if condition, which is practically just another if statement.
        // We'll repeat this for the rest of the code.
        else if (Operator == '-') {
            printf("\nNumbers to SUBTRACT:\n");

            printf("  A: ");
            scanf("%f", &A);

            printf("  B: ");
            scanf("%f", &B);
            
            float Result = ExecuteOperation(Operator, A, B);

            printf("%f %c %f = %f", A, Operator, B, Result);
        } else if (Operator == '*') {
            printf("\nNumbers to MULTIPLY:\n");

            printf("  A: ");
            scanf("%f", &A);

            printf("  B: ");
            scanf("%f", &B);
            
            float Result = ExecuteOperation(Operator, A, B);

            printf("%f %c %f = %f", A, Operator, B, Result);
        } else if (Operator == '/') {
            printf("\nNumbers to DIVIDE:\n");

            printf("  A: ");
            scanf("%f", &A);

            printf("  B: ");
            scanf("%f", &B);
            
            float Result = ExecuteOperation(Operator, A, B);

            printf("%f %c %f = %f", A, Operator, B, Result);
        } else if (Operator == 'q' || Operator == 'Q') {
            // When wanting to exit a program or a loop, you use the break variable to snap out of it.
            break;
        }
    } while(1);

    // Additional Note(s) \\ 

    // When using conditions, you don't always need to check if something is directly equal to something, you can check if they're not, if they are one or the other, etc. Here is a quick cheat-sheet for them.

    /*
        Equal : ==
        Not-Equal : !=

        Greater Then : >=
        Less Then : <=

        Greater Then : >
        Less Then : <

        | LOGICAL OPERATORS |

        Logical AND : && // Both conditions must be true
        Logical OR : || // Atleast one conditions must be true
        Logical NOT : ! // Reverses the condition (true >> false, false >> true) 
    */
}