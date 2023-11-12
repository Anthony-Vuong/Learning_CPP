// Section_15_Challenge1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Account_Util.h"

int main()
{
    std::vector<Account> accounts;
    accounts.push_back(Account());
    accounts.push_back(Account("Tony", 0));
    accounts.push_back(Account("Peter", 1500));
    accounts.push_back(Account("Kyle", 1250));
    
    display(accounts);
    deposit(accounts, 375);
    withdraw(accounts, 1000);


    std::vector<Account> savings_accounts;
    accounts.push_back(Savings_Account());
    accounts.push_back(Savings_Account("Andrea"));
    accounts.push_back(Savings_Account("Allison", 1500));
    accounts.push_back(Savings_Account("Audrey", 1250, 3.0));

    display(accounts);
    deposit(accounts, 375);
    withdraw(accounts, 1000);
    return 0;
}

