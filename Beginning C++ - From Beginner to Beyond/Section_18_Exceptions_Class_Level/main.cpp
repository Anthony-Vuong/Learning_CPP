#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checkings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "InsufficientBalanceException.h"

int main()
{

    try{
        std::unique_ptr<Account> acc = std::make_unique<Checkings_Account>("Peter", -500);
        std::cout << *acc << std::endl;
    }
    catch(const InsufficientBalanceException &ex){
       std::cerr << "Cannot start with insufficent balance" << std::endl;

    }

    std:: cout << "End of program" << std::endl;

    return 0;
}

