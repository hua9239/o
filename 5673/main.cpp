#include <iostream>
#include "Card.h"
using namespace std;

int main()
{
    double card;
    cin >> card;
    Card c(card);
    c.print();
    return 0;
}