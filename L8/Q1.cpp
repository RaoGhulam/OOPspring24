/*Rao Ghulam Mohi Uddin (23K-0001)*/

#include <iostream>
using namespace std;

class book
{
public:
    string title;
    string author;
    string publisher;

    book(string t, string a, string p) : title(t), author(a), publisher(p) {}

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class fiction_book : public book
{
public:
    string genre;
    string protogonist;

    fiction_book(string t, string a, string p, string g, string pro) : book(t, a, p), genre(g), protogonist(pro) {}

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Genre: " << genre << endl;
        cout << "Protagonist: " << protogonist << endl;
    }
};

int main()
{
    fiction_book fb("Time", "Rao", "ZA", "Science Fiction", "Muzamil");
    fb.display();
    return 0;
}
