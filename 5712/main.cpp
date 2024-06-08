#include <iostream>
#include <iomanip>
#include "Book.h"
#include "Magazine.h"
using namespace std;

int main()
{
    string title;
    double pricePerPage;
    int pageCount;
    double discount;
    int issueCount;
    int volumeCount;

    cin >> title >> pricePerPage >> pageCount >> discount;
    Book book(title, pricePerPage, pageCount, discount);
    cout << "Book title: " << book.getTitle() << " -> page: " << book.getPageCount() << " price: " << fixed << setprecision(1) << book.getPrice() << endl;

    cin >> title >> pricePerPage >> issueCount >> volumeCount;
    Magazine magazine(title, pricePerPage, issueCount, volumeCount);
    cout << "Magazine title: " << magazine.getTitle() << " -> page: " << magazine.getTotalPageCount() << " price: " << fixed << setprecision(1) << magazine.getPrice() << endl;

    return 0;
}