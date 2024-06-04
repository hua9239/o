#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Publication.h"
using namespace std;

class Book : public Publication
{
public:
    Book(string title, double pricePerPage, int pageCount);
    Book();
    void setPageCount(int pageCount);
    int getPageCount();
    double getPrice();
    int getTotalPageCount();

private:
    int pageCount;
};

#endif