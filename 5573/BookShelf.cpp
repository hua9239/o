#include "BookShelf.h"

BookShelf::BookShelf()
{
}
BookShelf::BookShelf(string type)
{
    this->type = type;
}
void BookShelf::setType(string type)
{
    this->type = type;
}
string BookShelf::getType()
{
    return this->type;
}
void BookShelf::print()
{
    cout << type << endl;
}