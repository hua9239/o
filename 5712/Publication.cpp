#include "Publication.h"

Publication::Publication(string title, double pricePerPage)
{
    this->title = title;
    this->pricePerPage = pricePerPage;
}

Publication::Publication()
{
    this->title = "";
    this->pricePerPage = 0;
}

void Publication::setTitle(string title)
{
    this->title = title;
}

string Publication::getTitle()
{
    return title;
}

void Publication::setPricePerPage(double pricePerPage)
{
    this->pricePerPage = pricePerPage;
}

double Publication::getPricePerPage()
{
    return pricePerPage;
}