// Section_15_Args_Derived_to_Base.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Derived.h"
#include "Base.h"

int main()
{
    Derived d;       // In this project, base class constructor invoked
                     // as well as the derived class constructor

    Derived d1{ 100 }; // In this project, base class constructor invoked
                      // as well as the derived class constructor
                      // int value in base class will equal 100 and int doubled value will equal 200

    return 0;
}

