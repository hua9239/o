#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <string>
#include "Publication.h"
using namespace std;

class Magazine : public Publication
{
public:
    Magazine(string title, double pricePerPage, int issueCount, int volumeCount);
    Magazine();
    void setIssueCount(int issueCount);
    int getIssueCount();
    void setVolumeCount(int volumeCount);
    int getVolumeCount();
    double getPrice();
    int getTotalPageCount();

private:
    int issueCount;
    int volumeCount;
};

#endif