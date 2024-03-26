#include "Book.h"
#include "BookShelf.h"

int main()
{
    BookShelf bookShelf;
    Book book[10];
    string typeBookShelf;
    cin >> typeBookShelf;
    bookShelf.setType(typeBookShelf);
    for (int i = 0; i < 10; i++)
    {
        string name, type;
        cin >> name >> type;
        book[i].setName(name);
        book[i].setType(type);
    }
    bookShelf.print();
    for (int i = 0; i < 10; book[i++].print())
    {
    }
}