#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

class Deck
{
private:
    const int DECK_SIZE = 52;
    Card *cards;
    Card *player1;
    Card *player2;

    // swapByReference, swapByAddress
    void swapByReference(Card &, Card &);
    void swapByAddress(Card *, Card *);

public:
    Card *createDeck();
    void sortCard();
    void Shuffle(int);
    void distribute();
    void printCard(int);
    Card *getPlayer1();
    Card *getPlayer2();
    void show(Card *);
    void compare();

    // debug
    void debug();
};

#endif