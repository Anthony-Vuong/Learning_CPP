#include <iostream>

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello from Base Class Object" << std::endl;
    }
    virtual ~Base() {};

};

class Derived : public Base {
public:
    virtual void say_hello() const override{  //The override should be used when derived classes use the base class methods
                                              // In the case where we want to us dynamic polymorphism, the override will warn us
                                              // when that is not happening at compile-time. If override not provided and const is left out
                                              // then static binding takes place and we call base class method. 
        std::cout << "Hello from Derived Class Object" << std::endl;
    }
    virtual ~Derived() {};

};


int main()
{
    Base* p1 = new Base();
    p1->say_hello();

    Derived* p2 = new Derived();
    p2->say_hello();

    Base* p3 = new Derived();
    p3->say_hello();

    delete[] p1;
    delete[] p2;
    delete[] p3;


    return 0;
}

