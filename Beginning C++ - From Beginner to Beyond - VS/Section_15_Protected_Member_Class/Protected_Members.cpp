// Section_15_Protected_Member_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Base.h"
#include "Derived.h"

int main()
{
    Base b;
    b.a;  // Base a member is public - accessing through object is okay
    //b.b;  // Base b member is protected - accessing through object is NOK
    //b.c;  // Base C member is private - accessing through object is NOK


    Derived d;
    d.a = 100; // Derived a member is public - accessing through object is okay
    //d.b = 200; // Derived b member is protected - accessing through object is NOK
    //d.c = 300; // Derived c member is private - accessing through object is NOK
}

