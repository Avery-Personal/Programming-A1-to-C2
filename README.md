# Low Level Programming

This repo helps developers learn **C**, **C++**, and **Rust** step-by-step using real example projects.

## Level Structure (A1 >> C2)
> The A1-C2 rankings are based on the CEFR system (Common European Framework of Reference for Languages), but can also be applied outside language learning.

| Level | Concept Focus | Stage |
|-------|----------------|-----------------|
| A1 | Variables, Input | Beginner |
| A2 | Arrays & Structs | Elementary |
| B1 | File I/O | Intermediate |
| B2 | Algorithms | Upper-Intermediate |
| C1 | Threads | Advanced |
| C2 | Real Projects | Proficiency |

> Every folder has a README that explains the goal, concept taught, and how to run the example.

--

## Stages

| Language | A1       | A2           | B1   | B2   | C1   | C2   |
|----------|----------|--------------|------|------|------|------|
| C        | Complete | In-The-Works | WIP | WIP | WIP | WIP |
| C++      | WIP   | WIP       | WIP | WIP | WIP | WIP |
| Rust     | WIP   | WIP       | WIP | WIP | WIP | WIP |

> Linux/MacOS support is not fully added yet.

--

## Learning Guidance

This repo is designed to teach **low-level programming** across C, C++, and Rust, progressing from beginner to advanced projects (A1 → C2).  

**Why these languages?**
- **C**: Understand memory management, pointers, and low-level system concepts.
- **C++**: Learn object-oriented design, modularity, and high-performance abstractions.
- **Rust**: Learn safe concurrency, ownership, and modern systems programming.  

**Expected knowledge per level:**
- **A1–A2**: Variables, input/output, loops, arrays, structs
- **B1–B2**: File I/O, algorithms, functions, modular design
- **C1–C2**: Threads, networking, advanced systems, real-world applications  

**Difficulty rating:** Each project is rated 1–5 for complexity and time investment.

--

## Tips
- Try translating the same project between **C**, **C++**, and **Rust** to feel the differences.  
- Comment every version explaining how you’d do it differently in each language.  
- Keep code short, readable, and practical, this repo’s about understanding, not performance.

--

## Reference & Help

**Official Docs / Tutorials:**
- [C Language Reference](https://en.cppreference.com/w/c)
- [C++ Reference](https://en.cppreference.com/w/)
- [Rust Book](https://doc.rust-lang.org/book/)

**Common Pitfalls by Language:**
- **C**: `scanf` quirks, dangling pointers, undefined behavior
- **C++**: memory leaks, dangling references, undefined behavior
- **Rust**: ownership/borrowing errors, lifetime confusion

**Further Reading / Advanced Guides:**
- “The C Programming Language” by K&R
- “Effective Modern C++” by Scott Meyers
- “Programming Rust” by Blandy & Orendorff

--

## Contribution / How to Run

**Ways to contribute:**  
1. Fork this repo.  
2. Pick a language and level that’s WIP or incomplete.  
3. Add a project folder with a README explaining concepts.  
4. Open a Pull Request when ready.

**Running the examples:**  
- **C**: Compile with `gcc project.c -o project && ./project`  
- **C++**: Compile with `g++ project.cpp -o project && ./project`  
- **Rust**: Run with `cargo run --bin project_name` (each project can be a separate binary in `Cargo.toml`)  

**Community Resources:**
- Use the GitHub Discussions tab to ask questions or propose features
- Open issues for bugs, questions, or clarifications
- Star the repo to support it and track updates
