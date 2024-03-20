#include "BankAccount.h"

BankAccount::BankAccount()
{
    name = "Unknown";
    balance = 0.0;
}
BankAccount::BankAccount(string n, double b)
{
    name = n;
    balance = b;
}
void BankAccount::deposit(double amount)
{
    cout << "Deposited +" << amount << endl;
    balance += amount;
}
void BankAccount::withdraw(double amount)
{
    cout << "Withdrawed -" << amount << endl;
    balance -= amount;
}
void BankAccount::setName(string n)
{
    name = n;
}
void BankAccount::setBalance(double b)
{
    balance = b;
}
string BankAccount::getName() const
{
    return name;
}
double BankAccount::getBalance() const
{
    return balance;
}
void BankAccount::print_balance() const
{
    cout << "Account name: " << name << endl;
    cout << "Balance: " << balance << endl;
}