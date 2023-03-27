#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Book
{
    int accession_number;
    string author_name;
    string book_title;
    bool is_issued;
};

vector<Book> books;

void display_book_info(int accession_number)
{
    for (const auto &book : books)
    {
        if (book.accession_number == accession_number)
        {
            cout << "Accession Number: " << book.accession_number << endl;
            cout << "Author Name: " << book.author_name << endl;
            cout << "Book Title: " << book.book_title << endl;
            cout << "Issued: " << (book.is_issued ? "Yes" : "No") << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

void add_book()
{
    Book book;
    cout << "Enter Accession Number: ";
    cin >> book.accession_number;
    cout << "Enter Author Name: ";
    cin >> book.author_name;
    cout << "Enter Book Title: ";
    cin >> book.book_title;
    book.is_issued = false;
    books.push_back(book);
    cout << "Book added." << endl;
}

void display_books_by_author(string author_name)
{
    for (const auto &book : books)
    {
        if (book.author_name == author_name)
        {
            cout << "Accession Number: " << book.accession_number << endl;
            cout << "Book Title: " << book.book_title << endl;
        }
    }
}

void display_num_books_by_title(string book_title)
{
    int count = 0;
    for (const auto &book : books)
    {
        if (book.book_title == book_title)
        {
            count++;
        }
    }
    cout << "Number of books with title " << book_title << ": " << count << endl;
}

void display_total_num_books()
{
    cout << "Total number of books: " << books.size() << endl;
}

void issue_book(int accession_number)
{
    for (auto &book : books)
    {
        if (book.accession_number == accession_number)
        {
            if (book.is_issued)
            {
                cout << "Book is already issued." << endl;
            }
            else
            {
                book.is_issued = true;
                cout << "Book issued." << endl;
            }
            return;
        }
    }
    cout << "Book not found." << endl;
}

int main()
{
    int choice;
    do
    {
        cout << endl
             << "Library Menu" << endl;
        cout << "1. Display book information" << endl;
        cout << "2. Add a new book" << endl;
        cout << "3. Display all the books in the library of a particular author" << endl;
        cout << "4. Display the number of books of a particular title" << endl;
        cout << "5. Display the total number of books in the library" << endl;
        cout << "6. Issue a book" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int accession_number;
            cout << "Enter Accession Number: ";
            cin >> accession_number;
            display_book_info(accession_number);
            break;
        }
        case 2:
            add_book();
            break;
        case 3:
        {
            string author_name;
            cout << "Enter Author Name: ";
            cin >> author_name;
            display_books_by_author(author_name);
            break;
        }
        case 4:
        {
            string book_title;
            cout << "Enter Book Title: ";
            cin >> book_title;
            display_num_books_by_title(book_title);
            break;
        }
        case 5:
            display_total_num_books();
            break;
        case 6:
        {
            int accession_number;
            cout << "Enter Accession Number: ";
            cin >> accession_number;
            issue_book(accession_number);
            break;
        }
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}