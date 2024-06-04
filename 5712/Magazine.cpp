#include "Publication.h"
#include "Magazine.h"

Magazine::Magazine(string title, double pricePerPage, int issueCount, int volumeCount) : Publication(title, pricePerPage)
{
    this->issueCount = issueCount;
    this->volumeCount = volumeCount;
}

Magazine::Magazine()
{
    this->issueCount = 0;
    this->volumeCount = 0;
}

void Magazine::setIssueCount(int issueCount)
{
    this->issueCount = issueCount;
}

int Magazine::getIssueCount()
{
    return issueCount;
}

void Magazine::setVolumeCount(int volumeCount)
{
    this->volumeCount = volumeCount;
}

int Magazine::getVolumeCount()
{
    return volumeCount;
}

double Magazine::getPrice()
{
    return issueCount * volumeCount * getPricePerPage();
}

int Magazine::getTotalPageCount()
{
    return issueCount * volumeCount;
}