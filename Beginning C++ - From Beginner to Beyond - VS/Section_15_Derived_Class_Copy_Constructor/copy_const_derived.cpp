// Section_15_Derived_Class_Copy_Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Base.h"
#include "Derived.h"

int main()
{
    Base b1{ 100 };

    Base b2{ b1 };

    b1 = b2;

    Derived d1{ 100 };

    Derived d2{ d1 };

    d1 = d2;

    return 0;
}

