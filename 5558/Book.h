#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string name, type, serial_number;
    double price;

public:
    Book();
    Book(string, string, string, double);
    string getType() const;
    double getPrice() const;
    void print() const;
};

#endif