// Section_14_Overloading_Copy_Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystring.h"

int main()
{
    Mystring a{"Hello"};
    Mystring b;
    b = a;

    b = "This is a test.";
    
    
    return 0;
}

