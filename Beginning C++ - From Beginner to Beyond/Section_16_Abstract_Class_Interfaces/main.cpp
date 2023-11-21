#include <iostream>

/*
class Account{

    friend std::ostream &operator<<(std::ostream &os, const Account &obj);

public:
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }

    virtual ~Account(){}
};


std::ostream &operator<<(std::ostream &os, const Account &obj){
    
    os << "Account Display";
    return os;
}

class Checking : public Account{

    friend std::ostream &operator<<(std::ostream &os, const Checking &obj);

public:
    virtual void withdraw(double amount){
        std::cout << "In Checking::withdraw" << std::endl;
    }

    virtual ~Checking(){}
};


std::ostream &operator<<(std::ostream &os, const Checking &obj){
    
    os << "Checking Display";
    return os;
}


class Savings : public Account{

    friend std::ostream &operator<<(std::ostream &os, const Savings &obj);

public:
    virtual void withdraw(double amount){
        std::cout << "In Savings::withdraw" << std::endl;
    }

    virtual ~Savings(){}
};


std::ostream &operator<<(std::ostream &os, const Savings &obj){
    
    os << "Savings Display";
    return os;
}


class Trust : public Account{

    friend std::ostream &operator<<(std::ostream &os, const Trust &obj);

public:
    virtual void withdraw(double amount){
        std::cout << "In Trust::withdraw" << std::endl;
    }

    virtual ~Trust(){}
};


std::ostream &operator<<(std::ostream &os, const Trust &obj){
    
    os << "Trust Display";
    return os;
}

*/
// This class allows derived classes to print through ostream without having to create friend funtions - less clunky
class Printable{
    friend std::ostream &operator<<(std::ostream &os, const Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
};

// Only have to write this once, derived classes will use the Printable class through virtual functions to print to ostream
std::ostream &operator<<(std::ostream &os, const Printable &obj){
    obj.print(os);
    return os;

}

// This class does not overload the << operator, instead inherits from Printable to print to ostream by overriding its print function
class Account : public Printable{

public:

    virtual void print(std::ostream &os) const override{
        os << "Account display";
    }

    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }

    virtual ~Account(){}
};


// In the following classes Checkings, Savings, and Trust, since they inherit from Base class Account, they can use the print function with 
// override specifier

class Checking : public Account{


public:
  
    virtual void print(std::ostream &os) const override{
        os << "Checking display";
    }
    

    virtual void withdraw(double amount){
        std::cout << "In Checking::withdraw" << std::endl;
    }

    virtual ~Checking(){}
};


class Savings : public Account{

public:


    virtual void print(std::ostream &os) const override{
        os << "Savings display";
    }

    virtual void withdraw(double amount){
        std::cout << "In Savings::withdraw" << std::endl;
    }

    virtual ~Savings(){}
};

class Trust : public Account{


public:

    virtual void print(std::ostream &os) const override{
        os << "Trust display";
    }


    virtual void withdraw(double amount){
        std::cout << "In Trust::withdraw" << std::endl;
    }

    virtual ~Trust(){}
};

// This class directly inherits from base class Printable, overrides the print function, and writes to os
class Dog : public Printable{

public:
        virtual void print(std::ostream &os) const override{
                os << "Woofy woof arf";
        }
};


void print(const Printable &obj){
    std::cout << obj << std::endl;
}

   
int main(){
    Account a1;
    std::cout << a1 << std::endl;

    Checking c1;
    std::cout << c1 << std::endl;

    Savings s1;
    std::cout << s1 << std::endl;

    Trust t1;
    std::cout << t1 << std::endl;

    Account *ptr1 = new Checking();
    std::cout << *ptr1 << std::endl;

    Account *ptr2 = new Account();
    std::cout << *ptr2 << std::endl;

    Dog *dug = new Dog();
    std::cout << *dug << std::endl;

    print(*dug);

    return 0;
}
