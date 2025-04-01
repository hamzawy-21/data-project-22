#include <string>

using namespace std;

// Class representing a book
class Book {
    string title;
    string author;
	Book* next;
public:
 void setNext(Book* pB)
    {
        next = pB;
    }
    Book* getNext()
    {
        return next;
    }
	// Add setters and getters for the data members
};
// BookStore class representing a linked list of Books
class BookStore {
private:
    Book* head;

public:
    // 1-Constructor: Initializes the head 
    // Destructor: Deletes all Books in the list
    BookStore();

    ~BookStore();


    // 2- Prints the titles of all books in the store
    void printBooks();

    //3- Inserts a new book at the END of the store
    void insertBook(string title, string author) 

    // 4- Searches for a book by title and returns its node pointer (or nullptr if not found)
    Book* searchBook(const string& title);

    //5- Deletes a book at a given its author (Delete the first book for this autor). Returns false if no book is found for this author
    bool deleteBook(const string& author);
	
	// 6- Returns a list of all books for the given author
    BookStore* getBooklist(const string& author);
    

};