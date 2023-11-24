#ifndef PRINTABLE_H
#define PRINTABLE_H

#include <iostream>


class Printable{

    friend std::ostream &operator<<(std::ostream &os, const Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~Printable() = default;

};

#endif
