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

    Derived d2{ d1 };  // The derived class copy constructor will be invoked with Base()

    d1 = d2; // The derived class = operator overloader will be invoked with Base(other)

    // The result is both d1 and d2 have the base class and derived class initialized with the passed in value of 100,
    // which doubles in value

    return 0;
}

