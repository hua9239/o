#include "Deck.h"

void Deck::swapByReference(Card &a, Card &b)
{
    Card temp = a;
    a = b;
    b = temp;
}

void Deck::swapByAddress(Card *a, Card *b)
{
    Card temp = *a;
    *a = *b;
    *b = temp;
}

Card *Deck::createDeck()
{
    cards = new Card[DECK_SIZE];

    for (int size = 0; size < DECK_SIZE;)
    {
        for (int number = 1; number <= 13; number++)
        {
            for (int color = 1; color <= 4; color++)
            {
                cards[size].setCard(number + color * 0.1);
                size++;
            }
        }
    }
    return cards;
}

void Deck::sortCard()
{
    for (int i = 0; i < 52; i++)
    {
        int min = i;
        for (int j = i + 1; j < 52; j++)
        {
            if (cards[j].getCard() < cards[min].getCard())
            {
                min = j;
            }
        }
        swapByReference(cards[i], cards[min]);
    }
}

void Deck::Shuffle(int r)
{
    srand(r);
    for (int i = 0; i < 52; ++i)
    {
        int j = rand() % 52;
        swapByReference(cards[i], cards[j]);
    }
}

void Deck::distribute()
{
    player1 = new Card[26];
    player2 = new Card[26];

    for (int i = 0; i < 26; i++)
    {
        player1[i] = cards[i];
        player2[i] = cards[i + 26];
    }
}

void Deck::printCard(int i)
{
    cards[i].print();
}

Card *Deck::getPlayer1()
{
    return player1;
}

Card *Deck::getPlayer2()
{
    return player2;
}

void Deck::show(Card *player)
{
    for (int i = 0; i < 3; i++)
    {
        player[i].print();
    }
}

void Deck::compare()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Game" << i << ":" << endl;
        double p1 = player1[i].getCard();
        double p2 = player2[i].getCard();

        // fix 2 > A > K > Q > J
        // 1.1 -> 14.1
        // 2.1 -> 15.1
        p1 += (p1 < 3 ? 13 : 0);
        p2 += (p2 < 3 ? 13 : 0);

        if (p1 > p2)
        {
            cout << "player1 win" << endl;
        }
        else
        {
            cout << "player2 win" << endl;
        }
        // cout << p1 << " " << p2 << endl;
    }
}

void Deck::debug()
{
    for (int i = 0; i < 52; i++)
    {
        cout << cards[i].getCard() << (i % 4 == 3 ? '\n' : ' ');
    }
}