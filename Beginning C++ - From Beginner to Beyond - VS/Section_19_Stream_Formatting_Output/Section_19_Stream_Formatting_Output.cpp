#include <iostream>
#include <iomanip>
#include <string>

// Reference length when printing
void gauge_length() {
    std::cout << "12345678901234567890123456789012345678901234567890" << std::endl;
}


int main()
{
    int num1{ 1234 };
    double num2{ 1234.5678 };
    std::string hello{ "Hello" };

    // Default settings
    std::cout << "\n============================= Part 1 ==============================" << std::endl;
    gauge_length();
    std::cout << num1
              << num2
              << hello
              << std::endl;
    
    // Display each var on own line
    std::cout << "\n============================= Part 2 ==============================" << std::endl;
    gauge_length();
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << hello << std::endl;

    // Setting field width to 10 - default justication is right
    std::cout << "\n============================= Part 3 ==============================" << std::endl;
    gauge_length();
    std::cout << std::setw(10)
              << num1
              << num2
              << hello
              << std::endl;

    // Setting field width to 10 for 2 variables - default justication is right
    std::cout << "\n============================= Part 5 ==============================" << std::endl;
    gauge_length();
    std::cout << std::setw(10)
              << num1
              << std::setw(10)
              << num2
              << hello
              << std::endl;


    // Setting field width to 10 for 3 variables - justication is left
    std::cout << "\n============================= Part 6 ==============================" << std::endl;
    gauge_length();
    std::cout << std::setw(10) << std::left
        << num1
        << std::setw(10) << std::left
        << num2
        << std::setw(10) << std::left
        << hello
        << std::endl;

    // Setting field width to 10 for 3 variables - justication is left - setfill is '-'
    std::cout << "\n============================= Part 7 ==============================" << std::endl;
    gauge_length();
    std::cout << std::setfill('-');
    std::cout << std::setw(10) << std::left
              << num1
              << std::setw(10) << std::left
              << num2
              << std::setw(10) << std::left
              << hello
              << std::endl;

    // Setting field width to 10 for 3 variables - justication is left - setfill is '-'
    std::cout << "\n============================= Part 8 ==============================" << std::endl;
    gauge_length();

    std::cout << std::setw(10) << std::left << std::setfill('+')
              << num1
              << std::setw(10) << std::left << std::setfill('-')
              << num2
              << std::setw(10) << std::left << std::setfill('#')
              << hello
              << std::endl;

        


    return 0;
}

