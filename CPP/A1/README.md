# A1 - Basics (C++)

Welcome to **A1 - Basics**. At this level, you'll learn the fundamentals of C++:
- Variables & types
- Input/output (`cout`, `cin`)
- Basic arithmetic
- Functions
- Loops & conditionals

These projects are small, beginner-friendly, and perfect to start coding confidently.

---

## Project Order

1. Greeter
2. Multiplied-Numbers

## Projects

### Greeter
**Goal:** Get comfortable with console I/O and variable types.
**Recommended Before:** None (First Project)
**Recommended After:** `Multiplied-Numbers.cpp` (To Grasp Arithmetic Concepts)

### Multiplied-Numbers
**Goal:** Extend current knowledge of console I/O, variable types, and learn basic arithmetic operations.
**Recommended Before:** `Greetings.cpp` (To Understand Absolute Basics)
**Recommended After:** None (Last Project)

**What you’ll learn:**
- Printing to the console with `cout`
- Taking user input with `cin`
- Declaring and using variables
- Simple arithmetic operations

**Example Preview:**

```cpp
#include <iostream>
#include <string>

int main() {
    string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age " years old.\n";

    return 0;
}
```