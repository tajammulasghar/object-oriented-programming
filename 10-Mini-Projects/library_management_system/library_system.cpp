#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
        int bookId;
        string title;
        string author;
        bool available;
    
    public:
        Book(int id = 0, string t = "", string a = "");
        void borrow();
        void returnBook();
        bool isAvailable();
        void display();
        string getTitle();
};

Book::Book(int id, string t, string a) : bookId(id), title(t), author(a), available(true) {}

void Book::borrow()
{
    if(available) { available = false; cout << "Book borrowed successfully" << endl; }
    else cout << "Book not available" << endl;
}

void Book::returnBook()
{
    available = true;
    cout << "Book returned successfully" << endl;
}

bool Book::isAvailable() { return available; }

string Book::getTitle() { return title; }

void Book::display()
{
    cout << "ID: " << bookId << ", Title: " << title << ", Author: " << author;
    cout << ", Status: " << (available ? "Available" : "Borrowed") << endl;
}

int main()
{
    Book b1(101, "C++ Basics", "Bjarne Stroustrup");
    Book b2(102, "Data Structures", "Mark Allen Weiss");
    Book b3(103, "Algorithms", "Cormen");
    
    cout << "=== Library Management System ===" << endl;
    
    cout << "\n--- Available Books ---" << endl;
    b1.display();
    b2.display();
    b3.display();
    
    cout << "\n--- Borrow Operations ---" << endl;
    b1.borrow();
    b1.display();
    
    b2.borrow();
    b2.display();
    
    cout << "\n--- Try Borrowing Unavailable ---" << endl;
    b2.borrow();
    
    cout << "\n--- Return Operations ---" << endl;
    b1.returnBook();
    b1.display();
    
    return 0;
}

/* Description: Library Management System with Book class supporting borrow,
   return, and availability status operations. */
