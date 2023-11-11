// Section_15_Derived_Class_Copy_Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Base.h"
#include "Derived.h"
#include "Account.h"
#include "Savings_Account.h"

int main()
{
    //Base b1{ 100 };

    //Base b2{ b1 };

    //b1 = b2;

   // Derived d1{ 100 };

    //Derived d2{ d1 };  // The derived class copy constructor will be invoked with Base()

    //d1 = d2; // The derived class = operator overloader will be invoked with Base(other)

    // The result is both d1 and d2 have the base class and derived class initialized with the passed in value of 100,
    // which doubles in value

    std::cout << "Account Class" << std::endl;

    std::cout << std::endl;

    Account a1{ 1000.0 };
    std::cout << a1 << std::endl;

    a1.deposit(500.0);
    std::cout << a1 << std::endl;

    a1.withdraw(100.0);
    std::cout << a1 << std::endl;

    a1.withdraw(1000.0);
    std::cout << a1 << std::endl;

    std::cout << std::endl;

    std::cout << "Savings Account Class" << std::endl;

    std::cout << std::endl;

    Savings_Account a2{ 500.0, 3.0 };
    std::cout << a2 << std::endl;

    a2.deposit(500.0);
    std::cout << a2 << std::endl;

    a2.withdraw(100.0);
    std::cout << a2 << std::endl;

    a2.withdraw(1000.0);
    std::cout << a2 << std::endl;




    return 0;
}

