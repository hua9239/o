#include "Card.h"

Card::Card()
{
    Card(1.1);
}

Card::Card(double c)
{
    card = c;
    symbol = (int)card - 1;
    suit = (int)(card * 10) % 10 - 1;
}

string Card::getSuit()
{
    return St[suit];
}

string Card::getSymbol()
{
    return Sl[symbol];
}

void Card::print()
{
    cout << "Symbol: " << getSymbol() << endl;
    cout << "Suit: " << getSuit() << endl;
}