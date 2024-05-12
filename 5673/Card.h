#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <vector>
using namespace std;

class Card
{
private:
    int symbol; // number
    int suit;   // color
    double card;
    vector<string> St = {"Club", "Diamond", "Heart", "Spade"};
    vector<string> Sl = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

public:
    Card();
    Card(double);
    string getSuit();
    string getSymbol();
    void print();
};

#endif