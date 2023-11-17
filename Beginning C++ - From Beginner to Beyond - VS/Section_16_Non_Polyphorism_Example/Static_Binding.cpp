#include <iostream>

class Base {
public:
    void say_hello() const{
        std::cout << "Hello from Base Class Object" << std::endl;
    }
};

class Derived : public Base{
public:
    void say_hello() const{
        std::cout << "Hello from Derived Class Object" << std::endl;
    }
};

void greetings(const Base &obj) {
    std::cout << "Greetings" << std::endl;
    obj.say_hello();
}


int main()
{
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    greetings(d);       // This calls the Base class object's say_hello() method

    Base* ptr = new Derived();

    ptr->say_hello();

    greetings(*ptr);


    delete[] ptr;

    return 0;
}
