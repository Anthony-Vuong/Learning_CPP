#include <iomanip>
#include <iostream>

int main()
{
    double n1{123456789.987654321};
    double n2{1234.5678};
    double n3{1234.0};

    // Printing n1, n2, and n3 with no settings changed
    std::cout << "\n============================= Part 1 ==============================" << std::endl;
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;

    // Printing n1, n2, and n3 with precision of 2 - all scientific notation will display
    std::cout << "\n============================= Part 2 ==============================" << std::endl;
    std::cout << std::setprecision(2);
    std::cout << n1 << std::endl;   
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;

    // Printing n1, n2, and n3 with precision of 5
    std::cout << "\n============================= Part 3 ==============================" << std::endl;
    std::cout << std::setprecision(5);
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;

    // Printing n1, n2, and n3 with precision of 9
    std::cout << "\n============================= Part 4 ==============================" << std::endl;
    std::cout << std::setprecision(9);
    std::cout << n1 << std::endl;   // 123456789
    std::cout << n2 << std::endl;   // 1234.5678
    std::cout << n3 << std::endl;   // 1234

    // Printing n1, n2, and n3 with precision of 3 and fixed - 3 digits after decimal and gets rounded
    std::cout << "\n============================= Part 5 ==============================" << std::endl;
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << n1 << std::endl;   // 123456789.988
    std::cout << n2 << std::endl;   // 1234.568
    std::cout << n3 << std::endl;   // 1234.000

    // Printing n1, n2, and n3 with precision of 3 and scientific
    std::cout << "\n============================= Part 6 ==============================" << std::endl;
    std::cout << std::setprecision(3) << std::scientific;
    std::cout << n1 << std::endl;   
    std::cout << n2 << std::endl;   
    std::cout << n3 << std::endl;  

    // Printing n1, n2, and n3 with precision of 3 and scientific with capital 'E'
    std::cout << "\n============================= Part 6 ==============================" << std::endl;
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;

    // Printing n1, n2, and n3 with precision of 3 and fixed - 3 digits after decimal and gets rounded and '+' in front
    std::cout << "\n============================= Part 7 ==============================" << std::endl;
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;

    // Reset back to defaults
    std::cout << "\n\n[RESETTING FORMATTING]\n" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);


    // Printing n1, n2, and n3 with precision of 10
    std::cout << "\n============================= Part 8 ==============================" << std::endl;
    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;

    // Reset back to defaults
    std::cout << "\n\n[RESETTING FORMATTING]\n" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);

    // Printing n1, n2, and n3 with no settings changed
    std::cout << "\n============================= Part 1 ==============================" << std::endl;
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;



    return 0;
}

