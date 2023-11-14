// Section_14_ Overloading_Operators_Extraction_Insertion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystring.h"

int main()
{






    /* ================================== Overloaded stream operators Tests ================================== */

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    std::cout << "Enter the 3rd stooge's first name: ";
    std::cin >> curly;

    std::cout << std::endl;

    std::cout << "The 3 stooges are: " << larry << ", " << moe << ", and " << curly << std::endl;

    std::cout << "Enter the 3 stooges first names seperated by spaces: ";
    std::cin >> larry >> moe >> curly;

    std::cout << "Again, the 3 stooges are: " << larry << ", " << moe << ", and " << curly << std::endl;

    /* ============================ End of Overloaded stream operators Tests ================================== */


    return 0;
}


