#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std;

int main(void)
{
    Account Tarek;
    Tarek.withdraw(200);
    Tarek.deposite(200);
    Tarek.withdraw(100);
    return 0;
}

void Account::withdraw (int cash)
{
    if (balance <= 0 && cash > balance)
        cout << "Insufficient account balance!"<< endl;
    else
    {
    balance -= cash;
    cout << "Success! Your balance now is $"<< balance << endl;
    }    
    
}
void Account::deposite (int cash)
{
    balance += cash; 
    cout << "Success! Your balance now is $"<< balance << endl;
} 