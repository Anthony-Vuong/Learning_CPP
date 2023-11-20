#ifndef  LION_H
#define  LION_H

#include <string>
#include "Animal.h"

class Lion : public Animal{

public:
    virtual std::string get_noise() override;
    virtual int get_num_legs() override;

};






#endif
