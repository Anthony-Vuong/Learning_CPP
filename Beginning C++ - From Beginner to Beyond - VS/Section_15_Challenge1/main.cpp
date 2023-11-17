#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

int main()
{
    Account Tony{ "Tony", 0 };
    std::vector<Account*> accounts;
    accounts.push_back(&Tony);

    Tony += 100;
    
    std::cout << Tony << std::endl;

    deposit(accounts, 375);
    display(accounts);

    Tony -= 250;
    std::cout << "Account: " << Tony << std::endl;
    display(accounts);


    /*
    std::vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{ "Tony", 0 });
    accounts.push_back(Account{ "Peter", 1500 });
    accounts.push_back(Account{ "Kyle", 1250 });
    
    display(accounts);
    deposit(accounts, 375);
    withdraw(accounts, 1000);
    */
   
    std::vector<Savings_Account*> savings_accounts;
    Savings_Account empty;
    Savings_Account Andrea{ "Andrea" };
    Savings_Account Allison{ "Allison", 1500 };
    Savings_Account Audrey{ "Audrey", 1250, 3.0 };

    savings_accounts.push_back(&empty);
    savings_accounts.push_back(&Andrea);
    savings_accounts.push_back(&Allison);
    savings_accounts.push_back(&Audrey);

    display(savings_accounts);
    deposit(savings_accounts, 375);
    withdraw(savings_accounts, 1000);

    Andrea += 2500;
    std::cout << Andrea << std::endl;

    display(savings_accounts);

    std::vector<Checkings_Account*> checkings_accounts;

    Checkings_Account empty1;
    Checkings_Account Hunter{ "Hunter" };
    Checkings_Account Hudson{ "Hudson", 500 };
    Checkings_Account Daniel{ "Daniel", 2500 };


    checkings_accounts.push_back(&empty1);
    checkings_accounts.push_back(&Hunter);
    checkings_accounts.push_back(&Hudson);
    checkings_accounts.push_back(&Daniel);

    display(checkings_accounts);
    deposit(checkings_accounts, 425);
    withdraw(checkings_accounts, 1000);

    std::vector<Trust_Account*> trust_accounts;
    Trust_Account Eileen{ "Eileen", 500.0, 2.0 };
    trust_accounts.push_back(&Eileen);

    Eileen += 100;
    display(trust_accounts);

    Eileen -= 2000; 
    display(trust_accounts);

    // Deposit #1: $500, balance should be 1010(interest from 500 deposit included)
    deposit(trust_accounts, 500);

    // Deposit #2: $5000, balance should be 6160(interest from 5000 deposit included + $50 bonus)
    deposit(trust_accounts, 5000);

    // Withdraw #1: $500, balance should be 5660
    withdraw(trust_accounts, 500);

    // Withdraw #2: 20% of balance, balance should be 4528
    withdraw(trust_accounts, 1132);

    // Withdraw #3: >20% of balance, balance should be 4528, error should occur
    withdraw(trust_accounts, 1528);

    // Withdraw #4: $278, make it even, balance should 4250
    withdraw(trust_accounts, 278);

    // Withdraw #4: Withdrawing any amount on the 4th try should not work
    withdraw(trust_accounts, 500);
 
    return 0;
}

