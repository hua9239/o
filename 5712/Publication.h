#ifndef PUBLCATION_H
#define PUBLCATION_H

#include <string>
using namespace std;

class Publication
{
public:
    Publication(string title, double pricePerPage);
    Publication();
    void setTitle(string title);
    string getTitle();
    void setPricePerPage(double pricePerPage);
    double getPricePerPage();

private:
    string title;
    double pricePerPage;
};

#endif