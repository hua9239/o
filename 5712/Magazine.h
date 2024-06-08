#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <string>
#include "Publication.h"
using namespace std;

class Magazine : public Publication
{
private:
    int issueCount;
    int volumeCount;

public:
    Magazine();
    Magazine(string title, double pricePerPage, int issueCount, int volumeCount);
    void setIssueCount(int issueCount);
    int getIssueCount();
    void setVolumeCount(int volumeCount);
    int getVolumeCount();
    double getPrice();
    int getTotalPageCount();
};

#endif