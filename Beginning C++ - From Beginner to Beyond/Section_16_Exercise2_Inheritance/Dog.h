#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"


class Dog : public Animal{

protected:
    std::string name;
    int age;
public:
    Dog(const std::string name, int age) : Animal(name, age){}
    virtual std::string get_noise() override;
    virtual int get_num_legs() override;
    

};




#endif
