#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>


int main(){

    int num{};
    double total{};
    std::string name{};

    std::cout << "---------------------------------- Part 1 --------------------------------" << std::endl;
    std::string info{"Moe 100 1234.5"};
    std::istringstream iss{info};

    iss >> name >> num >> total;
    std::cout << std::setw(10) << std::left << name
              << std::setw(5) << num
              << std::setw(10) << total
              << std::endl;

    std::cout << "---------------------------------- Part 2 --------------------------------" <<  std::endl;
    std::ostringstream oss{};

    oss << std::setw(10) << std::left << name
              << std::setw(5) << num
              << std::setw(10) << total
              << std::endl;
    std::cout << oss.str() << std::endl;


    std::cout << "---------------------------------- Part 3 --------------------------------" <<  std::endl;
    int value{};
    std::string entry{};
    bool done = false;

    do{
        std::cout << "Please enter an integer: ";
        std::cin >> entry;
        std::istringstream validator{entry};
        if(validator >> value){
            done = true;
        }
        else{
            std::cout << "Sorry, that's not an integer" << std::endl;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }while(!done);

    std::cout << "Entered " << value << std::endl;


    return 0;
}
