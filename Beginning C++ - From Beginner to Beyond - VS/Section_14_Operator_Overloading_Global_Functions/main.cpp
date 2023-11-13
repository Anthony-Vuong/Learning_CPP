// Section_14_Operator_Overloading_Member_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystring.h"

int main()
{
    Mystring larry{ "Larry" };     // Overloaded constructor called
    Mystring moe{ "Moe" };         // Overloaded constructor called

    Mystring stooge = larry;       // Not assignment, so copy constructor called
    larry.display();
    moe.display();


    std::cout << "Larry and moe are equal: \t" << std::boolalpha << (larry == moe) << std::endl;        // Calls (==) overloaded operator
    std::cout << "Larry and stooge are equal: \t" << (larry == stooge) << std::endl;

    larry.display();
    Mystring larry2 = -larry;                   // Calls (-) overloaded operator - lowercase string
    larry2.display();

    //Mystring stooges = larry + "Moe";
    Mystring stooges = "larry" + moe;           // This will now work because the overloaded operator is declared as global function friend to the mystring class 
                                                // The global function take 2 args instead of 1 
    Mystring two_stooges = moe + " " + larry;
    two_stooges.display();

    Mystring three_stooges = two_stooges + " Curly";
    three_stooges.display();

    return 0;
}

