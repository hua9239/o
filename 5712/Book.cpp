#include "Book.h"

Book::Book()
{
    pageCount = 0;
    discount = 0.0;
}

Book::Book(string title, double pricePerPage, int pageCount, double discount) : Publication(title, pricePerPage)
{
    this->pageCount = pageCount;
    this->discount = discount;
}

void Book::setPageCount(int pageCount)
{
    this->pageCount = pageCount;
}

int Book::getPageCount()
{
    return pageCount;
}

void Book::setDiscount(double discount)
{
    this->discount = discount;
}

double Book::getDiscount()
{
    return discount;
}

double Book::getPrice()
{
    return pageCount * getPricePerPage() * discount;
}

int Book::getTotalPageCount()
{
    return pageCount;
}