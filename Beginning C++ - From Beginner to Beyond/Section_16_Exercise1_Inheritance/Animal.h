#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>


class Animal{

public:
        virtual std::string get_noise() = 0;
        virtual int get_num_legs() = 0;

};


#endif  /*ANIMAL_H*/
