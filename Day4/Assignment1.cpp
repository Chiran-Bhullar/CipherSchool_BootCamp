#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:

    Book(string t, string a, int y) : title(t), author(a), year(y) {}


    void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {

    Book myBook("1984", "George Orwell", 1949);

    myBook.displayInfo();

    return 0;
}
