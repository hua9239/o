#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Card
{
private:
    int suit;   // color
    int symbol; // number
    double card;

    vector<string> St = {"Club", "Diamond", "Heart", "Spade"};                              // color list
    vector<string> Sl = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"}; // number list

public:
    Card();
    Card(double);
    void setCard(double);
    string getSuit();
    string getSymbol();
    double getCard();
    void print();
};

#endif