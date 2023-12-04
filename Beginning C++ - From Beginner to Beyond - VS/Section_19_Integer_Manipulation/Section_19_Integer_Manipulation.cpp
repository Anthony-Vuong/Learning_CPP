#include <iostream>
#include <iomanip>

int main()
{
    int num{ 255 };

    // Use different formatting for an integer
    std::cout << "\n============================= Part 1 ==============================" << std::endl;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Use different formatting for an integer and show the base
    std::cout << "\n============================= Part 2 ==============================" << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Use different formatting for an integer and show the base with uppercase
    std::cout << "\n============================= Part 3 ==============================" << std::endl;
    std::cout << std::showbase << std::uppercase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Display sign of integer 255 will display as +255
    std::cout << "\n============================= Part 4 ==============================" << std::endl;
    std::cout << std::showpos;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // Using the above in method/function
    std::cout << "\n============================= Part 5 ==============================" << std::endl;
    std::cout << "Setting shoebase, uppercase, and showpos with functions \nstd::ios::showbase\nstd::ios::uppercase\nstd::ios::showpos\n\n\n";
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    // Rest ios flags
    std::cout << "\n============================= Part 6 ==============================" << std::endl;
    std::cout << "Resetting shoebase, uppercase, and showpos with functions \nstd::ios::showbase\nstd::ios::uppercase\nstd::ios::showpos\n\n\n";
    std::cout << std::resetiosflags(std::ios::basefield);
    std::cout << std::resetiosflags(std::ios::uppercase);
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::showpos);
    
    std::cout << "\n============================= Part 7 ==============================" << std::endl;
    std::cout << "More examples with cin input\n\n";

    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << "\nDecimal value: " << num << std::endl;
    
    std::cout << "\nHexadecimal value: " << std::hex << num << std::endl;
    std::cout << "\nHexadecimal value: " << std::hex << std::uppercase << num << std::endl;
    std::cout << "\nHexadecimal value: " << std::hex << num << std::endl;
    std::cout << "\nHexadecimal value: " << std::hex << std::nouppercase << num << std::endl;

    std::cout << "\nOctal value: " << std::oct << num << std::endl;
    std::cout << "\nHexadecimal value: " << std::hex << std::showbase << num << std::endl;
    std::cout << "\nOctal value: " << std::oct << num << std::endl;

    return 0;
}


