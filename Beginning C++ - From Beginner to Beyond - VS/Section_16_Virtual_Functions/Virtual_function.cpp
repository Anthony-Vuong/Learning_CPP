#include <iostream>

class Account {
public:
    //In the base class, by defining that this function is virtual, all derived class will use their own version of this function rather than the base
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }

    virtual ~Account() { std::cout << "In Account::destructor" << std::endl; };

};

class Savings_Account : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings_Account::withdraw" << std::endl;
    }
    virtual ~Savings_Account() { std::cout << "In Savings_Account::destructor" << std::endl; };
};

class Checkings_Account : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checkings_Account::withdraw" << std::endl;
    }

    virtual ~Checkings_Account() { std::cout << "In Checkings_Account::destructor" << std::endl; };
};

class Trust_Account : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust_Account::withdraw" << std::endl;
    }
    virtual ~Trust_Account() { std::cout << "In Trust_Account::destructor" << std::endl; };

};


int main()
{

    Account* p1 = new Account();
    Account* p2 = new Savings_Account();
    Account* p3 = new Checkings_Account();
    Account* p4 = new Trust_Account();

    p1->withdraw(100);
    p2->withdraw(100);
    p3->withdraw(100);
    p4->withdraw(100);

    delete[] p1;
    delete[] p2;
    delete[] p3;
    delete[] p4;

    return 0;
    
}
