#include "Publication.h"
#include "Book.h"

Book::Book(string title, double pricePerPage, int pageCount) : Publication(title, pricePerPage)
{
    this->pageCount = pageCount;
}

Book::Book()
{
    this->pageCount = 0;
}

void Book::setPageCount(int pageCount)
{
    this->pageCount = pageCount;
}

int Book::getPageCount()
{
    return pageCount;
}

double Book::getPrice()
{
    return pageCount * getPricePerPage();
}

int Book::getTotalPageCount()
{
    return pageCount;
}