/*
A2 - Grade-Averager

This is a simple program, for C, that gets a group of grades, and sums them up.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to start on the A1 examples, if you haven't already.
*/

#include <stdio.h>

int main() {
    // When creating a integer, or any other variable type, you can give it an array of data. Similar to how char can get an array for multiple characters to create a string, you can give integers arrays, to hold multiple sets of data. In this case, we're holding 5 grades.
    // To add data to an array, you can use curly brackets {}, and seperate each set of data with a comma. For example, if I have 3 ages, I can say {13, 28, 17}, which holds 3 sets of ages, being 13, 28, and 17. When calling arrays manually though, C starts on arrays with 0. So using the previous data, if I wanted to get the second age (28), then I wouldn't say Ages[2], as that's 17, we'd instead say Ages[1], as 13 starts out at 0.
    int Grades[5];

    // Since we are directly adding each grade to the sum later on, we'd set Sum to 0 so it isn't set to a random value.
    int Sum = 0;

    // For loops are a large set of information to tackle, especially if you're brand new and already see a big list of stuff inside it. So dumbing it down as much as possible, here is how for loops work.

    // For loops work by having a condition, which is held inside the parentheses, after the for keyword. In this case, we are creating a variable called i, and setting it to 0. After we do that, we check if i is less then 5, which in this case it is, and lastly, it adds 1 to it. i stands for iterator/iteration in programming, so we are creating an iterator starting at 0. For loops run X times until the condition is met. In this case, the loop runs 5 times, once for each grade, because the array size is 5 and arrays start at index 0.
    for (int i = 0; i < 5; i++) {
        // We are printing for the grade, and just saying the current grade you're on by adding 1 to the current iteration.
        printf("Enter grade %d: ", i + 1);

        // Due to how arrays are made, we're starting i at 0, because arrays do too. 
        scanf("%d", &Grades[i]);

        Sum += Grades[i];
    }

    // Floats are similar to integers, but instead of whole numbers, can give exact number(s), going into decimal places.
    float Average = Sum / 5;

    printf("\nAverage grade: %f", Average);

    // Although not mentioned during A1, you usually want to add a return at the end of your main, this is just so we ensure the function does end, and because of the function type, which we'll get into later.
    return 0;
}