// Library Management System using C++
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Book{
    int id;
    string title;
    string author;
    int quantity;
};

const int MAX = 100;
Book library[MAX];
int count = 0;

// Function Declarations
void loadBooks();
void saveBooks();
void addBook();
void displayBooks();
void searchBook();
void sortBooks();
void issueBook();
void returnBook();
void deleteBook();

int main(){
    int choice;

    loadBooks();
    do{
        cout << "\n===== Library Management System =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Sort Books" << endl;
        cout << "5. Issue Book" << endl;
        cout << "6. Return Book" << endl;
        cout << "7. Delete Book" << endl;
        cout << "8. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                sortBooks();
                break;
            case 5:
                issueBook();
                break;
            case 6:
                returnBook();
                break;
            case 7:
                deleteBook();
                break;
            case 8:
                saveBooks();
                cout << "Data Saved Successfully!" << endl;
                break;
            default:
                cout << "Invalid Choice!" << endl;
        }
    }while(choice != 8);
    return 0;
}

// Load Books from File
void loadBooks(){

    ifstream file("books.txt");
    if(!file){
        return;
    }
    while(file >> library[count].id){
        file.ignore();
        getline(file, library[count].title);
        getline(file, library[count].author);
        file >> library[count].quantity;
        file.ignore();
        count++;
    }
    file.close();
}

// Save Books to File
void saveBooks(){
    ofstream file("books.txt");
    for(int i = 0; i < count; i++){
        file << library[i].id << endl;
        file << library[i].title << endl;
        file << library[i].author << endl;
        file << library[i].quantity << endl;
    }

    file.close();
}

// Add Book
void addBook(){

    if(count >= MAX){
        cout << "Library Full!" << endl;
        return;
    }
    cout << "Enter Book ID: ";
    cin >> library[count].id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, library[count].title);
    cout << "Enter Author Name: ";
    getline(cin, library[count].author);
    cout << "Enter Quantity: ";
    cin >> library[count].quantity;
    count++;
    saveBooks();
    cout << "Book Added Successfully!" << endl;
}

// Display Books
void displayBooks(){

    if(count == 0){
        cout << "No Books Available!" << endl;
        return;
    }
    cout << "\n===== Book Records =====" << endl;
    for(int i = 0; i < count; i++){
        cout << "\nBook ID: " << library[i].id << endl;
        cout << "Title: " << library[i].title << endl;
        cout << "Author: " << library[i].author << endl;
        cout << "Quantity: " << library[i].quantity << endl;
    }
}

// Search Book
void searchBook(){

    int id;
    bool found = false;
    cout << "Enter Book ID to Search: ";
    cin >> id;
    for(int i = 0; i < count; i++){
        if(library[i].id == id){
            cout << "\nBook Found!" << endl;
            cout << "Title: " << library[i].title << endl;
            cout << "Author: " << library[i].author << endl;
            cout << "Quantity: " << library[i].quantity << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Book Not Found!" << endl;
    }
}

// Sort Books by Title
void sortBooks(){
    for(int i = 0; i < count - 1; i++){
        for(int j = i + 1; j < count; j++){
            if(library[i].title > library[j].title){
                Book temp = library[i];
                library[i] = library[j];
                library[j] = temp;
            }
        }
    }
    cout << "Books Sorted Successfully!" << endl;
}

// Issue Book
void issueBook(){

    int id;
    string student;
    bool found = false;
    cout << "Enter Book ID to Issue: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, student);
    for(int i = 0; i < count; i++){
        if(library[i].id == id){
            if(library[i].quantity > 0){
                library[i].quantity--;
                saveBooks();
                cout << "Book Issued to " << student << endl;
            }
            else{
                cout << "Book Out of Stock!" << endl;
            }
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Book Not Found!" << endl;
    }
}

// Return Book
void returnBook(){
    int id;
    bool found = false;
    cout << "Enter Book ID to Return: ";
    cin >> id;
    for(int i = 0; i < count; i++){
        if(library[i].id == id){
            library[i].quantity++;
            saveBooks();
            cout << "Book Returned Successfully!" << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Book Not Found!" << endl;
    }
}

// Delete Book
void deleteBook(){
    int id;
    cout << "Enter Book ID to Delete: ";
    cin >> id;
    for(int i = 0; i < count; i++){
        if(library[i].id == id){
            for(int j = i; j < count - 1; j++){
                library[j] = library[j + 1];
            }
            count--;
            saveBooks();
            cout << "Book Deleted Successfully!" << endl;
            return;
        }
    }
    cout << "Book Not Found!" << endl;
}