#ifndef PUBLCATION_H
#define PUBLCATION_H

#include <string>
using namespace std;

class Publication
{
private:
    string title;
    double pricePerPage;

public:
    Publication();
    Publication(string title, double pricePerPage);
    void setTitle(string title);
    string getTitle();
    void setPricePerPage(double pricePerPage);
    double getPricePerPage();
};

#endif