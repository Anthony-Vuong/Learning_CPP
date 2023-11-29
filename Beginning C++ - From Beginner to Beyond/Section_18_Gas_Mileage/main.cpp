#include <iostream>
#include <iomanip>

/* This function calculates miles per gallon - throws and catches an exception if divide by 0*/
double calc_average(int miles, int gallons){
        double temp{};
        try{
            if(gallons == 0)
                    throw 0;
            temp = static_cast<double>(miles) / gallons;
        }catch(int &ex){
            std::cerr << "Divide by 0 err" << std::endl;
        }

        return temp;
}

/* This function will calcualte mpg and throw an exception if Divide by 0*/
double calc_average1(int miles, int gallons){
        if(gallons == 0)
            throw 0;
        return static_cast<double>(miles) / gallons;

}

int main(){

    int miles{};
    int gallons{};
    double mpg{};

    std:: cout << "==================== PART1 =======================" << std::endl;
    std::cout << "How many miles? ";
    std::cin >> miles;

    std::cout << "How many gallons? ";
    std::cin >> gallons;


    try{

        if(gallons == 0)
                throw 0;
        mpg = static_cast<double>(miles) / gallons;

    }catch(int &h){
        std::cerr << "Divide by 0 ERROR" << std::endl;

    }

    std::cout << std::setprecision(3) <<  "Your mpg is " << mpg << "\n" << std::endl;


    std:: cout << "==================== PART2 =======================" << std::endl;

    std::cout << "How many miles? ";
    std::cin >> miles;

    std::cout << "How many gallons? ";
    std::cin >> gallons;

    mpg = calc_average(miles, gallons);              
    std::cout << std::setprecision(3) <<  "Your mpg is " << mpg << "\n" << std::endl;



    std:: cout << "==================== PART3 =======================" << std::endl;

    std::cout << "How many miles? ";
    std::cin >> miles;

    std::cout << "How many gallons? ";
    std::cin >> gallons;

    try{
        mpg = calc_average1(miles, gallons);
    }catch(int &ex){
        std::cerr << "Divide by 0 ERROR" << std::endl;
    }
    std::cout << std::setprecision(3) <<  "Your mpg is " << mpg << "\n" << std::endl;

    return 0;
}
