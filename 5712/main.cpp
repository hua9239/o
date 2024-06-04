/*
鯊鯊最近開了一家新書店，目前他正在忙著上架書籍和標價。你能幫忙建立一個Book類別和一個Magazine類別，且兩者都繼承自Publication類別，來幫助他更快完成工作嗎？



Publication - private 私有領域：
title: string // 標題
pricePerPage: double // 每頁的價格

Book - private 私有領域：
pageCount: int // 總頁數
discount: double // 折扣(範圍為0到1)

Magazine - private 私有領域：
issueCount: int // 每期的頁數
volumeCount: int // 總共的期數

Publication - public 公開領域：
建構子、setTitle()、getTitle()、setPricePerPage()、getPricePerPage()

Book - public 公開領域：
建構子、setPageCount()、getPageCount()、setDiscount()、getDiscount()、getPrice()、getTotalPageCount()

Magazine - public 公開領域：
建構子、setIssueCount()、getIssueCount()、setVolumeCount()、getVolumeCount()、getPrice()、getTotalPageCount()




【相關公式參照】
書的價格=總頁數×每頁的價格×折扣
雜誌的價格=每期的頁數×總共的期數×每頁的價格

【額外題目需求】
1. 小數部分請輸出小數點後一位。
2. 類別的建立請使用this之寫法。
3. 每個類別需要有兩個建構子(初始化+輸入資料)。




輸入說明：
依序輸入書名、每頁價格、頁數、折扣建立一個Book物件，再依序輸入雜誌名、每頁價格、每期頁數、總期數建立一個Magazine物件。

輸出說明：
依照範例輸出以及相關公式，分別輸出Book物件及Magazine物件的各項資料。



範例輸入：
Bihuan's_Book 0.66 200 0.9
Bihuan's_Magazine 0.88 120 12

範例輸出：
Book title: Bihuan's_Book -> page: 200 price: 118.8
Magazine title: Bihuan's_Magazine -> page: 1440 price: 1267.2
*/

#include <iostream>
#include <string>
#include <iomanip>

#include "Publication.h"
#include "Magazine.h"
#include "Book.h"
using namespace std;

int main() {
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