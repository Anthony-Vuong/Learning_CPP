#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal{

protected:
    std::string name;
    int age;

public:
    //Constructor
    Animal(const std::string &name, int age): name{name}, age{age}{}

    virtual std::string get_noise() = 0;
    virtual int get_num_legs() = 0;
    virtual std::string get_name(){ return name;}
    virtual int get_age(){return age;}

};

#endif
