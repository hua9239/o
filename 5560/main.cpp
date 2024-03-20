#include "BankAccount.h"

int main()
{
    string name;
    double balance;
    cin >> name >> balance;
    BankAccount account(name, balance);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int operation;
        cin >> operation;
        if (operation == 1)
        {
            double amount;
            cin >> amount;
            account.deposit(amount);
        }
        else if (operation == 2)
        {
            double amount;
            cin >> amount;
            account.withdraw(amount);
        }
        else
        {
            account.print_balance();
        }
    }
    account.print_balance();
}