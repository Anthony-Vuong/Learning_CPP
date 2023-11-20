#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main(){

    Dog d1{"Fido", 5};


    std::cout << d1.get_name() << " is " << d1.get_age() << " and he goes ";
    std::cout << d1.get_noise() << std::endl;


    Dog* d2 = new Dog{"Doug", 10};
    std::cout << d2->get_name() << " is " << d2->get_age() << " and he goes ";
    std::cout << d2->get_noise() << std::endl;

    std::cout << "Fun fact, " << d2->get_name() << " has " << d2->get_num_legs() << "." << std::endl;

    delete [] d2;
    
    return 0;
}
