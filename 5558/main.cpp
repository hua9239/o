#include "Person.h"
#include "Book.h"

int main()
{
    const int person_count = 10;
    const int book_count = 50;

    Person people[person_count];
    Book books[book_count];

    for (int i = 0; i < person_count; i++)
    {
        string name, type;
        cin >> name >> type;
        people[i] = Person(name, type);
    }
    for (int i = 0; i < book_count; i++)
    {
        string name, type, serial_number;
        double price;
        cin >> name >> type >> serial_number >> price;
        books[i] = Book(name, type, serial_number, price);
    }

    for (int i = 0; i < person_count; i++)
    {
        people[i].print();

        for (int j = 0; j < book_count; j++)
        {
            if (people[i].getType() == books[j].getType())
            {
                books[j].print();
            }
        }
        cout << "----------" << endl;
    }
}