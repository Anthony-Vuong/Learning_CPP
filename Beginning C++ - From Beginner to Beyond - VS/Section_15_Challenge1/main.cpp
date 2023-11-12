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
    accounts.push_back(Account{});
    accounts.push_back(Account{ "Tony", 0 });
    accounts.push_back(Account{ "Peter", 1500 });
    accounts.push_back(Account{ "Kyle", 1250 });
    
    display(accounts);
    deposit(accounts, 375);
    withdraw(accounts, 1000);


    std::vector<Savings_Account> savings_accounts;
    savings_accounts.push_back(Savings_Account{});
    savings_accounts.push_back(Savings_Account{ "Andrea" });
    savings_accounts.push_back(Savings_Account{ "Allison", 1500 });
    savings_accounts.push_back(Savings_Account{ "Audrey", 1250, 3.0 });

    display(savings_accounts);
    deposit(savings_accounts, 375);
    withdraw(savings_accounts, 1000);

    std::vector<Checkings_Account> checkings_accounts;
    checkings_accounts.push_back(Checkings_Account{});
    checkings_accounts.push_back(Checkings_Account{ "Hunter" });
    checkings_accounts.push_back(Checkings_Account{ "Hudson", 500 });
    checkings_accounts.push_back(Checkings_Account{ "Daniel", 2500 });

    display(checkings_accounts);
    deposit(checkings_accounts, 425);
    withdraw(checkings_accounts, 1000);
    return 0;
}

