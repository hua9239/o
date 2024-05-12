#include <iostream>
#include "Card.h"
#include "Deck.h"
using namespace std;

int main()
{
    Deck deck;
    deck.createDeck();
    // deck.debug();

    deck.sortCard();
    int r;
    cin >> r;
    deck.Shuffle(r);
    deck.distribute();

    deck.show(deck.getPlayer1());
    cout << "----------" << endl;

    deck.show(deck.getPlayer2());
    cout << "----------" << endl;

    deck.compare();
}