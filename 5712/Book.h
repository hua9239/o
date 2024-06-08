#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Publication.h"
using namespace std;

class Book : public Publication
{
private:
    int pageCount;
    double discount;

public:
    Book();
    Book(string title, double pricePerPage, int pageCount, double discount);
    void setPageCount(int pageCount);
    int getPageCount();
    void setDiscount(double discount);
    double getDiscount();
    double getPrice();
    int getTotalPageCount();
};

#endif