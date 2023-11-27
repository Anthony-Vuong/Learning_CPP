#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checkings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"


int main()
{
    Account *s1 = new Savings_Account{"Anthony", 500, 2.0};

    std::cout << *s1 << std::endl;

    Account *s2 = new Checkings_Account{"Peter", 1000, 1.0};

    std::cout << *s2 << std::endl;

    Account *s3 = new Trust_Account{"Kyle", 100, 0.5};

    std::cout << *s3 << std::endl;

    std::vector<Account*> accounts;

    accounts.push_back(s1);
    accounts.push_back(s2);
    accounts.push_back(s3);

    display(accounts);

    
    return 0;
}

