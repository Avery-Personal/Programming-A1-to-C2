# A2 - Data & Control (C)

Welcome to **A1 - Data & Control**. This stage builds on A1 fundamentals and introduces working with arrays, loops, structs, and conditional logic.

You’ll learn:
- Storing and manipulating multiple values with arrays
- Organizing data using structs
- Control flow with `if`/`else` and `switch`
- Combining loops and conditionals for practical programs

These projects gradually increase in complexity. Doing them in order helps solidify concepts before moving on.

---

## Project Order

1. Grade Averager
2. Contact Book
3. Mini Calculator

## Projects

### Grade Averager
**Goal:** Learn arrays and loops to process multiple values.
**Recommended Before:** A1 Projects
**Recommended After:** `Contact-Book.c`

### Contact Book
**Goal:** Organize multiple pieces of related data using structs.
**Recommended Before:** `Grade-Averager.c`
**Recommended After:** Mini Calculator

### Mini Calculator
**Goal:** Combine arithmetic, user input, and conditional logic.
**Recommended Before:** `Contact-Book.c`
**Recommended After:** None (Last Project)

**What you’ll learn:**
- Arrays & loops for processing multiple values
- Structs for organizing related data
- Conditional logic with `if`/`else` and `switch`
- Combining multiple concepts into one program

**Example Preview:**

```c
#include <stdio.h>

typedef struct {
    char name[50];
    int grade;
} Student;

int main() {
    Student Students[3];
    int Sum = 0;

    for(int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", Students[i].name);

        printf("Enter grade for %s: ", Students[i].name);
        scanf("%d", &Students[i].grade);

        Sum += Students[i].grade;
    }

    printf("\nStudent Grades:\n");
    
    for(int i = 0; i < 3; i++) {
        printf("%s: %d\n", Students[i].name, Students[i].grade);
    }

    int Average = Sum / 3;
    printf("Class Average: %d\n", Average);

    return 0;
}

```