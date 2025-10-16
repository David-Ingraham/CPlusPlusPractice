# 1-Week C++ Crash Course

## Day 1: Memory Management Fundamentals
- **Morning (3 hours)**
  - Stack vs Heap memory
  - Pointers review and pointer arithmetic
  - `new` and `delete` operators
  - Memory leaks and debugging
  
- **Afternoon (3 hours)**
  - Smart pointers: `unique_ptr`, `shared_ptr`, `weak_ptr`
  - RAII (Resource Acquisition Is Initialization)
  - Move semantics and rvalues
  - Practice: Write programs with manual and smart pointer memory management

## Day 2: Object-Oriented Programming Part 1
- **Morning (3 hours)**
  - Classes and objects review
  - Constructors, destructors, copy constructors
  - Constructor initialization lists
  - `this` pointer
  
- **Afternoon (3 hours)**
  - Inheritance and access specifiers
  - Virtual functions and polymorphism
  - Abstract classes and pure virtual functions
  - Practice: Build a simple class hierarchy (e.g., Shape -> Circle, Rectangle)

## Day 3: Object-Oriented Programming Part 2
- **Morning (3 hours)**
  - Operator overloading
  - Friend functions and classes
  - Static members
  - Const correctness
  
- **Afternoon (3 hours)**
  - Templates (function and class templates)
  - Multiple inheritance and virtual inheritance
  - Practice: Create a template container class and overload operators

## Day 4: Data Structures
- **Morning (3 hours)**
  - STL containers: `vector`, `list`, `deque`
  - `map`, `unordered_map`, `set`, `unordered_set`
  - Iterators and algorithms
  
- **Afternoon (3 hours)**
  - Implementing custom data structures:
    - Linked list
    - Binary search tree
    - Hash table basics
  - Big O notation review
  - Practice: Solve algorithmic problems using STL and custom structures

## Day 5: Advanced Data Structures & Algorithms
- **Morning (3 hours)**
  - Priority queues and heaps
  - Graph representations
  - Tree traversals
  
- **Afternoon (3 hours)**
  - Common algorithms: sorting, searching
  - Dynamic programming basics
  - Practice: Implement key algorithms from scratch

## Day 6: Multithreading Part 1
- **Morning (3 hours)**
  - Thread basics with `std::thread`
  - Creating and joining threads
  - Thread lifecycle and detaching
  - Passing arguments to threads
  
- **Afternoon (3 hours)**
  - Race conditions and data races
  - Mutexes: `std::mutex`, `std::lock_guard`, `std::unique_lock`
  - Deadlocks and how to avoid them
  - Practice: Create multi-threaded programs with synchronization

## Day 7: Multithreading Part 2 & Review
- **Morning (3 hours)**
  - Condition variables (`std::condition_variable`)
  - Atomic operations (`std::atomic`)
  - Futures and promises
  - Thread pools concept
  
- **Afternoon (3 hours)**
  - Integration review: Build a project combining all concepts
  - Example: Multi-threaded producer-consumer with custom data structures
  - Common interview questions practice

## Study Tips
- Code along with every example
- Don't just read - type and run the code
- Use compiler warnings: `-Wall -Wextra -std=c++17` or higher
- Debugger practice (gdb or Visual Studio debugger)
- Focus on understanding over memorization
- Take 10-min breaks every hour

## Key Resources
- cppreference.com for syntax reference
- C++ Core Guidelines
- Practice problems on LeetCode/HackerRank focusing on the topics above


