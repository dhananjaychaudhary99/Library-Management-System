# Library Management System

A console-based Library Management System developed using C++.  
The project manages book records efficiently using file handling and supports operations such as adding, searching, sorting, issuing, returning, and deleting books.

---

## Features

- Add new books
- Display all books
- Search books by ID
- Sort books by title
- Issue books to students
- Return issued books
- Delete book records
- Persistent data storage using file handling

---

## Technologies Used

- C++
- File Handling
- Structures
- Arrays
- Functions

---

## Project Structure

```bash
Library-Management-System/
│── library_management_system.cpp
│── books.txt
│── README.md
```

---

### Open Project

Open the project in:
- VS Code
- CodeBlocks
- Dev C++
- Any C++ IDE

### Compile Program

```bash
g++ library_management_system.cpp -o library
```

### Run Program

```bash
./library
```

---

## Functionalities

### Add Book
Stores new book details including:
- Book ID
- Title
- Author Name
- Quantity

### Search Book
Searches books using Book ID.

### Sort Books
Sorts all books alphabetically by title.

### Issue Book
Issues a book to a student and decreases quantity.

### Return Book
Returns a book and updates quantity.

### Delete Book
Removes a book record from the system.

### File Handling
Stores all book records permanently in `books.txt`.

---

## Learning Outcomes

- Understanding of file handling in C++
- CRUD operations implementation
- Menu-driven program development
- Searching and sorting techniques
- Data management using structures

---

## Future Improvements

- GUI-based interface
- Login authentication
- Database connectivity
- Fine management system
- Student database integration

---

## Author

Dhananjay Chaudhary
