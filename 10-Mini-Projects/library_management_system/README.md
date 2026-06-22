# Library Management System

A beginner-friendly OOP project for managing library books and borrowing operations.

## Features

- Create book records with ID, title, and author
- Borrow books with availability checking
- Return books
- Display book information
- Track availability status

## Files

- `library_system.cpp` - Complete implementation with main function

## How to Compile and Run

```bash
g++ -o library_system library_system.cpp
./library_system
```

## Example Output

```
=== Library Management System ===

--- Available Books ---
ID: 101, Title: C++ Basics, Author: Bjarne Stroustrup, Status: Available
ID: 102, Title: Data Structures, Author: Mark Allen Weiss, Status: Available

--- Borrow Operations ---
Book borrowed successfully
ID: 101, Title: C++ Basics, Author: Bjarne Stroustrup, Status: Borrowed
```

## Concepts Used

- Classes and Objects
- State Management (availability)
- Encapsulation
- Member Functions
- Boolean flags for status tracking
