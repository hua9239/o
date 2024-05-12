#include "Card.h"

Card::Card()
{
    setCard(1.1); // default card is Club A
}

Card::Card(double c)
{
    setCard(c);
}

void Card::setCard(double c)
{
    card = c;
    suit = int(c * 10) % 10;
    symbol = int(c);
}

string Card::getSuit()
{
    return St[suit - 1];
}

string Card::getSymbol()
{
    return Sl[symbol - 1];
}

double Card::getCard()
{
    return card;
}

void Card::print()
{
    cout << "Symbol: " << getSymbol() << endl;
    cout << "Suit: " << getSuit() << endl;
}