#include <string>
#include "Dog.h"


int Dog::get_num_legs(){
    return 4;
}

std::string Dog::get_noise(){
    std::string s{"Woof"};
    return s;
}
