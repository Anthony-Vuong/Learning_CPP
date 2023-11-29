#include <iostream>
#include <iomanip>

// Exception classes
class DivideByZeroException{
};
class NegativeValueException{
};


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
        if(gallons < 0 || miles < 0)
            throw std::string {"Error with gallons or miles < 0"};
        return static_cast<double>(miles) / gallons;

}


/* This function will calcualte mpg and throw an exception if Divide by 0*/
double calc_average2(int miles, int gallons){
        if(gallons == 0)
            throw DivideByZeroException();
        if(gallons < 0 || miles < 0)
            throw NegativeValueException();
        return static_cast<double>(miles) / gallons;

}

int main(){

    int miles{};
    int gallons{};
    double mpg{};
/*
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
    }catch(std::string &ex){
        std::cerr << ex << std::endl;
    }catch(...){
        std::cerr << "Unknown exception" << std::endl;
    }
    std::cout << std::setprecision(3) <<  "Your mpg is " << mpg << "\n" << std::endl;

*/
    std:: cout << "==================== PART4 =======================" << std::endl;

    std::cout << "How many miles? ";
    std::cin >> miles;

    std::cout << "How many gallons? ";
    std::cin >> gallons;

    try{
        mpg = calc_average2(miles, gallons);
    }catch(const DivideByZeroException &ex){
        std::cerr << "Divide by 0 ERROR" << std::endl;
    }catch(const NegativeValueException &ex){
        std::cerr << "Negative value ERROR" << std::endl;
    }catch(...){
        std::cerr << "Unknown exception" << std::endl;
    }
    std::cout << std::setprecision(3) <<  "Your mpg is " << mpg << "\n" << std::endl;

    return 0;
}
