/*
A2 - Contact-Book

This is a simple program, for C, that gets your inputted information via a struct, and outputs it cleanly.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to start on the A1 examples, if you haven't already.
*/

#include <stdio.h>

// Structs are a way in C to create structured sets of data, into one custom type. It's sort-of a box, that holds values in a structured way. There are multiple ways to create structs, in this case, we'll use the standard.

struct ContactInfo {
    // When using structs, we store information inside it of, like any other variable you'll make.
    // In this case, we're creating a contact book, so we need to create variables for their info.

    char name[15];
    int age;
    char email[25];

    // Unlike other braced material in C, structs end in a semi-colons, to show the struct ended.
};

/*

An extension to what was said is there's multiple ways to create a struct, another way to do it is saying typedef before it. Using typedef allows you to point towards a variable or piece of data without having to manually call it.
When using typedef, you put the name of it after you finish writing it out.

typedef struct {
    char name[15];
    int age;
    char email[25];
} Contact;

This way is the exact same as the one we did, except it allows you to call the variable a lot easier, which you'll see later on.

*/

int main() {
    // When creating a variable for structs, you first use struct, signaling you're either creating or calling a struct. Secondly, you, in this case, call the struct, ContactInfo. Lastly to this, you create the name of the variable you want for it.
    // With this, we're calling the struct ContactInfo to create a variable called employee that uses it as its data structure.
    struct ContactInfo employee;

    printf("Welcome! May I know who is coming today?\n\n");

    printf("Name: ");
    // When selecting pieces of data from the structure, you use the period, which grabs the value of the selected field and allows you to modify it. We'll repeat this for the age and email.
    scanf("%14s", employee.name);
    
    printf("Age: ");
    // We use & for age because scanf needs the address of integers, unlike arrays which are automatically treated as pointers.
    scanf("%d", &employee.age);
    
    printf("Work email: ");
    scanf("%24s", employee.email);

    printf("\nWelcome %s! I'll be putting in your time of arrival under %s. Have a good day.\n", employee.name, employee.email);

    // Additional Notes \\ 

    // Continuing the talk about typedef based structs, when calling them to create variables, it eases the process a lot, from:
    // struct Student student

    // To: 

    // Student student
}