#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checkings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "InsufficientBalanceException.h"
#include "InvalidWithdrawException.h"
#include "MaxDepositsException.h"

int main()
{

    try{
        std::unique_ptr<Account> acc = std::make_unique<Checkings_Account>("Peter", 500); // An InsufficientFundsException should be thrown here
        std::cout << *acc << std::endl;
    }
    catch(const InsufficientBalanceException &ex){
       std::cerr << ex.what() << std::endl;

    }

    try{
 
        std::unique_ptr<Account> acc1 = std::make_unique<Checkings_Account>("Peter", 500);
        acc1->withdraw(10);  // An InvalidWIthdrawException should be thrown here
    }catch(const InvalidWithdrawException &ex){
        std::cerr << ex.what() << std::endl;
    }

    try{
 
        std::unique_ptr<Account> acc2 = std::make_unique<Trust_Account>("Peter", 5000);
        acc2->withdraw(100);
        acc2->withdraw(100);
        acc2->withdraw(100);
        acc2->withdraw(100); // A MaxDepositsException should be thrown here
    }catch(const MaxDepositsException &ex){
        std::cerr << ex.what() << std::endl;
    }
    std:: cout << "End of program" << std::endl;

    return 0;
}

