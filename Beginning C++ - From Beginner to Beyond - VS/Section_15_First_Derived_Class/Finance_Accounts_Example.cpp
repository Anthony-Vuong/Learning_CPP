// Section_15_First_Derived_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

int main()
{
    // Base class declaration and initiliazation
    Account acc1;
    acc1.deposit(100.0);
    acc1.withdraw(300.0);

    std::cout << std::endl;

    // Base class pointer declaraction and initialization
    Account* acc2{nullptr};
    acc2->withdraw(300.0);
    acc2->deposit(150.00);

    std::cout << std::endl;

    // Derived class declaration and initiliazation
    Savings_Account acc3;
    acc3.deposit(1000.0);
    acc3.withdraw(3500.0);

    std::cout << std::endl;

    // Derived class pointer declaraction and initialization
    Savings_Account* acc4{nullptr};
    acc4->withdraw(625.0);
    acc4->deposit(990.00);

    std::cout << std::endl;


}

