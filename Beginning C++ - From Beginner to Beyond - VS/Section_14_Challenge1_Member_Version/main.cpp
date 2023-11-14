// Section_14_ Overloading_Operators_Extraction_Insertion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystring.h"

int main()
{

    /* ================================== Overloaded Minus(-) Operator Test ==================================

    larry1.display();
    Mystring larry2 = -larry1;                   // Calls (-) overloaded operator - lowercase string
    larry2.display();

     =========================== End of Overloaded Minus Operator Test ===================================== */

    /* ================================== Copy constructor Test ============================================== */
    
    Mystring larry1{ "Larry" };     // Overloaded constructor called
    Mystring moe1{ "Moe" };         // Overloaded constructor called

    Mystring stooge = larry1;       // Not assignment, so copy constructor called
    larry1.display();
    moe1.display();

    /* ================================== End of Copy constructor Test ======================================= */

    
    
    /* ================================== Overloaded Equality Operator Test ================================== */
    
    std::cout << "Larry and moe are equal: \t" << std::boolalpha << (larry1 == moe1) << std::endl;        // Calls (==) overloaded operator
    std::cout << "Larry and stooge are equal: \t" << (larry1 == stooge) << std::endl;

    /* =========================== End of Overloaded Equality Operator Test ================================== */


    /* ================================== Overloaded Not Equal Operator Test ================================== */

    std::cout << "Larry and moe are equal: \t" << std::boolalpha << (larry1 != moe1) << std::endl;        // Calls (!=) overloaded operator
    std::cout << "Larry and stooge are equal: \t" << (larry1 != stooge) << std::endl;

    /* =========================== End of Overloaded Not Equal Operator Test ================================== */

    /* ================================== Overloaded less than Operator Test ================================== */

    Mystring abc{"abc"};
    Mystring def{"def"};

    std::cout << "abc is less than def: \t" << std::boolalpha << (abc < def) << std::endl;        // Calls (<) overloaded operator
    std::cout << "def is less than abc: \t" << (def < abc) << std::endl;


    /* ================================== End of Overloaded less than Operator Test ================================== */

    /* ================================== Overloaded more than Operator Test ================================== */

    Mystring ghi{ "ghi" };
    Mystring jkl{ "jkl" };

    std::cout << "ghi is more than jkl: \t" << std::boolalpha << (ghi > jkl) << std::endl;        // Calls (>) overloaded operator
    std::cout << "jkl is more than ghi: \t" << (jkl > ghi) << std::endl;


    /* ================================== End of Overloaded more than Operator Test ================================== */


    /* ================================== Overloaded Addition(+) Operator Test =============================== 
    //Mystring stooges = larry + "Moe";
    Mystring stooges = "larry" + moe1;           // This will now work because the overloaded operator is declared as global function friend to the mystring class 
    // The global function take 2 args instead of 1 
    Mystring two_stooges = moe1 + " " + larry1;
    two_stooges.display();

    Mystring three_stooges = two_stooges + " Curly";
    three_stooges.display();

     ============================End of Overloaded Addition(+) Operator Test =============================== */

    /* ================================== Overloaded Addition Assignment(+=) Operator Test ===============================*/
    Mystring tony{"Tony"};
    Mystring peter{ "Peter" };
    
    tony += peter;

    tony.display();

    tony += "kyle";

    tony.display();
    peter.display();

    /* ============================End of Overloaded Addition Assignment(+=) Operator Test =============================== */

     /* ================================== Overloaded Multiplyt(*) Operator Test ===============================*/
    Mystring cat{ "Cat" };
    Mystring pet;

    pet = cat * 5;          // Note: 5 * cat will not work - overloaded operator expects a Mystring object for lhs and an int as rhs

    pet.display();

    /* ============================End of Overloaded Multiply (*) Operator Test =============================== */

     /* ================================== Overloaded Multiply Assignment(*) Operator Test ===============================*/
    Mystring dog{ "Dog" };

    dog *= 7;          // Note: 5 * cat will not work - overloaded operator expects a Mystring object for lhs and an int as rhs

    dog.display();

    /* ============================End of Overloaded Multiply Assignment(*) Operator Test =============================== */

      /* ================================== Overloaded Post-Increment(++) Operator Test ===============================*/
    Mystring all_upper{ "SMILE" };
    all_upper.display();
    std::cout << "Lower case of " << all_upper << " is " << - all_upper << std::endl;

    
    Mystring all_lower{ "smile" };

    ++all_lower;          

    all_lower.display();

    -all_lower;

    all_lower.display();

    all_lower++;          

    all_lower.display();

    /* ============================End of Overloaded Multiply Assignment(*) Operator Test =============================== */




    /* ================================== Overloaded stream operators Tests ================================== 

    Mystring larry{ "Larry" };
    Mystring moe{ "Moe" };
    Mystring curly;

    std::cout << "Enter the 3rd stooge's first name: ";
    std::cin >> curly;

    std::cout << std::endl;

    std::cout << "The 3 stooges are: " << larry << ", " << moe << ", and " << curly << std::endl;

    std::cout << "Enter the 3 stooges first names seperated by spaces: ";
    std::cin >> larry >> moe >> curly;

    std::cout << "Again, the 3 stooges are: " << larry << ", " << moe << ", and " << curly << std::endl;

     ============================ End of Overloaded stream operators Tests ================================== */

    
    return 0;
}


