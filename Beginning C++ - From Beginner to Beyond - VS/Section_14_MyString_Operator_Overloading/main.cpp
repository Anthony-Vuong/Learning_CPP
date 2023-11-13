// Section_14_MyString_Operator_Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystring.h"

int main()
{
    Mystring tony;              // will call no args Mystring constructor
    Mystring peter{"Peter"};    // will call overloaded Mystring constructor
    Mystring boy{peter};        // will call Copy Mystring constructor

    tony.display();             // display the class char*
    peter.display();
    boy.display();

    return 0;
}

