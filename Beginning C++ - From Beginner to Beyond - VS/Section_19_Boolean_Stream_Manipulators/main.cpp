#include <iostream>
#include <iomanip>

#include <iostream>

int main()
{
    // Default boolalpha setting - 0/1
    std::cout << "noboolalpha - default (10==10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10!=10): " << (10 != 10) << std::endl;

    // Change boolalpha to output true/false using boolalpha to output stream
    std::cout << std::boolalpha;
    std::cout << "boolalpha - default (10==10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10!=10): " << (10 != 10) << std::endl;

    // Demonstrate that setting boolalpha is still used in later program
    std::cout << "boolalpha - default (20==20): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10!=20): " << (10 != 10) << std::endl;

    // Demonstrate that boolalpha can be set and reset
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha - default (20==20): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10!=20): " << (10 != 10) << std::endl;

    // Demonstrate that boolalpha can be set with function from cout class
    std::cout.setf(std::ios::boolalpha);
    std::cout << "boolalpha - default (20==20): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10!=20): " << (10 != 10) << std::endl;

    // Demonstrate that boolalpha can be reset with function given arg flag
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "Default (20==20): " << (10 == 10) << std::endl;
    std::cout << "Default (10!=20): " << (10 != 10) << std::endl;

    return 0;
}


