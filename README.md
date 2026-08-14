# Library Management System

A console-based **Library Management System** developed using **C++**.
The project manages book records using file handling and supports operations such as adding, searching, sorting, issuing, returning, and deleting books.

## 🚀 Features

* Add new books
* Display all books
* Search books by ID
* Sort books by title
* Issue books to students
* Return issued books
* Delete book records
* Persistent data storage using file handling
* Menu-driven interface

## 🛠️ Technologies Used

* **C++**
* **File Handling**
* **Structures**
* **Arrays**
* **Functions**

## 📂 Project Structure

```text
Library-Management-System/
│
├── library_management_system.cpp
├── books.txt
└── README.md
```

## ⚙️ Getting Started

### Open Project

Open the project in any C++ IDE or code editor, such as:

* VS Code
* Code::Blocks
* Dev-C++
* Any C++ IDE supporting standard C++

### Compile Program

```bash
g++ library_management_system.cpp -o library
```

### Run Program

```bash
./library
```

## 📌 Functionalities

### Add Book

Stores a new book record in the library by entering:

* Book ID
* Title
* Author Name
* Quantity

### Display Books

Displays all book records stored in the library, including Book ID, Title, Author Name, and Available Quantity.

### Search Book

Searches for a book using its unique **Book ID** and displays its complete details if found.

### Sort Books

Sorts all book records alphabetically based on the **Book Title** and displays the sorted list.

### Issue Book

Issues a book to a student after verifying its availability and decreases the available quantity by one.

### Return Book

Returns an issued book, updates the available quantity, and marks the book as available again.

### Delete Book

Removes a book record permanently from the library using its **Book ID**.

### Record Summary

Displays a summary of library records, including:

* Total number of books
* Total available books
* Total issued books

### Exit

Safely exits the Library Management System after saving all changes.


### File Handling

Book records are stored permanently in `books.txt`, allowing data to persist after the program is closed.

## 📚 Learning Outcomes

Through this project, I gained practical experience in:

* File handling in C++
* CRUD operations
* Menu-driven program development
* Searching and sorting techniques
* Structures and arrays
* Persistent data management
* Basic software project organization

## 🚀 Deployment

The project is deployed using **GitHub Pages**.

**GitHub Pages Deployment:**
[View Deployment](https://github.com/dhananjaychaudhary99/Library-Management-System/deployments/github-pages)

## 🔮 Future Improvements

* GUI-based interface
* User login and authentication
* Database connectivity
* Fine management system
* Student database integration
* Admin and student roles
* Improved user interface

## 👨‍💻 Author

**Dhananjay Chaudhary**

* GitHub: [Library-Management-System](https://github.com/dhananjaychaudhary99/Library-Management-System)

## 📄 License

This project is open-source and available under the **MIT License**.
