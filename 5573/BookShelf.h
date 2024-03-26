#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <iostream>
#include <string>
using namespace std;

class BookShelf
{
public:
    string type;
    BookShelf();
    BookShelf(string);
    void setType(string);
    string getType();
    void print();
};

#endif