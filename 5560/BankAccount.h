#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    double balance;

public:
    BankAccount();
    BankAccount(string, double);
    void deposit(double);
    void withdraw(double);
    void setName(string);
    void setBalance(double);
    string getName() const;
    double getBalance() const;
    void print_balance() const;
};

#endif