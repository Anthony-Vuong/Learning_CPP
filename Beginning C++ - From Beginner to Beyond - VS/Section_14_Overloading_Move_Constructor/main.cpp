// Section_14_Overloading_Move_Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystring.h"

int main()
{
    Mystring a{"Hello"};
    a = Mystring{"Hola"};

    a = "Bonjour";

    return 0;
}

