#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string name;
    string type;
    Book();
    Book(string, string);
    void setName(string);
    void setType(string);
    string getName();
    string getType();
    void print();
};

#endif