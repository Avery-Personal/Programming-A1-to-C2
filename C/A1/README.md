# A1 - Basics (C)

Welcome to **A1 - Basics**. At this level, you'll learn the fundamentals of C:
- Variables & types
- Input/output (`printf`, `scanf`)
- Basic arithmetic
- Functions
- Loops & conditionals

These projects are small, beginner-friendly, and perfect to start coding confidently.

---

## Project Order

1. Logger
2. Squared-Numbers

## Projects

### Logger
**Goal:** Get comfortable with console I/O and variable types.
**Recommended Before:** None (First Project)
**Recommended After:** `Squared-Numbers.c` (To Grasp Arithmetic Concepts)

### Squared-Numbers
**Goal:** Extend current knowledge of console I/O, variable types, and learn basic arithmetic operations.
**Recommended Before:** `Logger.c` (To Understand Absolute Basics)
**Recommended After:** None (Last Project)

**What you’ll learn:**
- Printing to the console with `printf`
- Taking user input with `scanf`
- Declaring and using variables
- Simple arithmetic operations

**Example Preview:**

```c
#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s! You are %d years old.\n", name, age);

    return 0;
}
```