#include <iostream>
#include <string>


class Base final{

 private:
         int num;
         std::string name;

 public:
         Base(int num, const std::string) : num{num}, name{name}{}
          
};

class Base1{

private:
         int num;
         std::string name;

public:
         Base1(int num, const std::string) : num{num}, name{name}{}
         virtual do_something() final;
};

//class Derived: public Base{

// This will result in a compiler error because derived is trying to inherit from Base. Base is defined as final, so it cannot be inherited from.

//};


class Derived final: public Base1{

//This derived class inherits from a non-final base class. WIll not generate a compiler error

public:
    virtual do_something(); // This will generate an error as in the base class it has been as final function

};

class Derived2: public Derived{

// THis will generate compile error becasue the derived class that this derived class inherits from is defined as final

};


int main(){
    return 0;
}
