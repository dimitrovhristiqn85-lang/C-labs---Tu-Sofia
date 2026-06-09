# C-labs---Tu-Sofia
My experience  with C program language through second half of the first eyer in Technical University - Sofia.

This repository contains a systematic collection of C programming source codes developed during university laboratory sessions. The projects cover everything from basic C syntax and conditional structures to advanced concepts such as dynamic memory management, pointer arithmetic, string manipulation, user-defined data structures, linked lists, and binary file handling.

---

### Contents by Topic and Laboratory Exercise

### 1. Introduction to C and Memory Sizes (Labs 1 - 2)
* **lab1zad1.c & lab1zad2.c:** Basic input and output operations using `scanf` and `printf`. Formatted output control. Investigation of primitive data type sizes (`int`, `float`, `char`) in bytes using the `sizeof` operator.
* **lab2.zad1.c:** Computation of linear mathematical expressions ($y = a \cdot x + 2 \cdot 15 \cdot b - c$) and examining the memory overhead of the variables.
* **lab2.zad2.c:** Practical experimentation with C operator precedence – integer division, pre/post-increment and decrement (`++a`, `b--`), explicit type casting (`(float)`), logical operators (`&&`, `||`, `!`), and relational expressions.
* **lab2.zad3.c:** Basic arithmetic operations (addition and subtraction) using floating-point numbers, formatted to three decimal places.

### 2. Conditionals, Loops, and Control Flow (Labs 3 - 4)
* **lab3zad1.c:** Utilizing `for` loops to iterate within a specific range and compute rolling mathematical sums.
* **lab3zad2.c:** Input data validation (checking for a valid numeric interval). Terminating execution with `return 1` upon encountering a fatal constraint error, and using `continue` to skip a loop iteration when bad data is detected ($x == 0$).
* **lab4zad1.c:** Implementation of an infinite loop `while(1)` controlled by a custom termination flag (`break`) triggered by a specific sentinel value (-999).
* **lab4zad2.c:** Algorithmic solution to find the minimum value and its corresponding index (sequence number) out of a dynamically inputted stream of numbers.
* **lab4zad3.c:** Categorized data processing: tracking and aggregating numbers based on multiple criteria (summing negative values, summing values divisible by 5, and combined checking using `input < 0 && input % 5 == 0`).
* **lab4zad4..c:** Calculating the arithmetic mean of pairs of numbers inside a loop. Validation of `scanf` successful input assignments using return flags (`flag == 1`).

### 3. Functions, Pointers, and Memory Allocation (Labs 5 - 7)
* **lab5zad1.c:** Allocating dynamic memory blocks using `calloc`, verifying allocation status (`p == NULL`), and implementing proper cleanup with `free(p)` to eliminate risk of Memory Leaks.
* **lab5zad2.c:** Dynamically resizing an existing memory block using `realloc`. Handling temporary pointer transfers and executing destination address validation safely.
* **lab6zad1.c:** Demonstration of passing parameters by value (Call by Value) and returning results via the `return` statement.
* **lab6zad2.c & lab6zad2b.c:** Comparative analysis between passing parameters by address (Call by Reference using pointers) and passing by value. Mutating data directly within the caller's stack frame without relying on a return statement.
* **lab6zad3.c:** Calculating the circumference and area of a circle within a single function (`calc`), returning multiple computed results back to `main` simultaneously via pointer references.
* **lab6zad4.c:** Modular programming paradigm: building separate reference-based functions to determine the sum, maximum, minimum, and average of 3 numbers using their memory addresses.
* **lab7zad1.c:** Implementation of a **recursive algorithm** to calculate factorials, defining a firm base case (`chislo == 0`) to unwind the execution stack.
* **lab7zad2.c:** Comparative study of an iterative approach (utilizing the native `pow` function from `math.h`) versus a custom-built recursive algorithm for raising real numbers to non-negative integer powers.

### 4. Arrays, Searching, and Sorting Algorithms (Labs 8 - 9)
* **lab8zad1.c:** Manipulating one-dimensional arrays passed as function arguments. Implementing subroutines for summation, counting even elements, and isolating indices holding odd values.
* **lab9zad1.c:** Implementation of the **Binary Search** algorithm within a pre-sorted array. Highly efficient lookup reducing search space by half each iteration.
* **lab9zad2a.c:** Implementation of the **Insertion Sort** algorithm to sort array elements in ascending order.
* **lab9zad2b.c:** Implementation of the classic **Bubble Sort** algorithm to arrange an array of floating-point numbers.

### 5. String Processing and Manipulation (Lab 10)
* **lab10zad1.c:** Secure string input handling via `fgets`, cleaning trailing newline characters (`\n`) using `strcspn`, and mapping symbol frequency distributions for two specific characters within a text block.
* **lab10zad2.c:** Iterating through string arrays to execute character case swapping: converting uppercase characters to lowercase (`tolower`) and lowercase to uppercase (`toupper`) using rules from `ctype.h`.
* **lab10zad3.c:** Space-stripping compression algorithm that removes all space characters (`' '`) from a string in-place.
* **lab10zad4.c:** Writing a custom string length function (`lenght`) using pointer arithmetic (incrementing addresses), followed by a filtering routine that searches for and deletes all instances of a target character.

### 6. Dynamic Arrays with Allocation Steps and Interactive Menus (Lab 11)
* **lab11zad1.c:** Building an interactive CLI text-based dashboard (with options for Sum, Max, Min, and Even Sum) driven by a `switch-case` block within a control loop.
* **lab11zad2.c:** Dynamic array input streaming until a terminal value of `0` is read. Memory is allocated in batches (chunks) using a predefined threshold (`#define STEP 5`) via `realloc` optimizations, completed with an array sorting pass.

### 7. Linked Lists, Custom Structs, and Binary I/O (Lab 15)
A highly sophisticated, multi-file modular C project demonstrating clean architectural separation across header files and source files:
* **lab15zad1.h:** Contains type definitions for a data structure `Person` (holding name and number records) and a self-referential `node` structure blueprint representing a **singly linked list** cell, alongside function prototypes.
* **lab15main.c:** Generates a binary file (`person.dat`), writes raw structures into stream storage using `fwrite` until a stop sentinel (`*`) is passed, opens it back up in read-binary mode (`rb`), constructs a dynamic linked list in heap memory, and dispatches data tasks.
* **lab15func.c:** Houses the core business logic of the application:
    * `makeStrlst`: Reads structured data from a binary stream using `fread` and systematically assembles the nodes into a linked list in RAM.
    * `prt`: Traverses the linked list sequentially, printing element contents alongside their absolute heap memory addresses.
    * `find_sum`: Loops through active list cells to accumulate the mathematical sum of numeric records.
    * `ime`: Performs a sequential search matching a specific ID/number query to retrieve a person's name.
    * `change`: Locates a specific node by ID and updates its text record field directly in place.

### 8. Algorithmic Puzzle Challenges
* **zaint.c:** An optimized, interview-grade solution for **finding a single missing number** in an unsorted array containing a sequence from $1$ to $N$. It relies on Gauss's summation principle:
    $$\text{Expected Sum} = \frac{n \cdot (n + 1)}{2}$$
    The missing value is resolved in $\mathcal{O}(1)$ constant auxiliary space by evaluating the difference between the mathematical expected sum and the real sum of the array's elements.

---

## 🛠️ Specifications and Tech Stack
* **Language:** C (C99 / C11 Standards)
* **Compiler:** GCC / Clang / MSVC (Configured with `_CRT_SECURE_NO_WARNINGS` for Visual Studio environment compatibility)
* **Core Concepts:** Dynamic Memory Allocation, Pointer Arithmetic, Singly Linked Lists, Binary File Streams, Sorting & Searching, Structural Architecture.

## 🗂️ Compilation and Execution (Example using Lab 15)
To compile the multi-file project component via terminal:
```bash
gcc lab15main.c lab15func.c -o program.exe
./program.exe
