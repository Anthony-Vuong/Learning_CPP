#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checkings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

class Test{

private:
    int data;
public:
    Test() :data{0} {std::cout << "Test constructor( " << data << ")" << std::endl;}
    Test(int data) :data{data} {std::cout << "Overload Test Constructor( " << data << ")" << std::endl;}
    int get_data() const {return data;}
    ~Test(){std::cout << "Test destructor(" << data << ")" << std::endl;}

};

void func(std::shared_ptr<Test> p){
    std::cout << "Use count: " << p.use_count() << std::endl;
}

int main()
{

    std::cout << "Part 1=================================================" << std::endl;
    // use_count() method returns the number of shared_ptr objects are managing the heap object
    std::shared_ptr<int> p1{new int{100}};
    std::cout << "Use count: " << p1.use_count() << std::endl; 

    std::shared_ptr<int> p2{p1};
    std::cout << "Use count: " << p1.use_count() << std::endl; 
    
    std::shared_ptr<int> p3;
    p3 = p1;
    std::cout << "Use count: " << p1.use_count() << std::endl; 
    
    p1.reset();
    std::cout << "Use count: " << p1.use_count() << std::endl; 
    

    std::cout << "Part 2=================================================" << std::endl;
    std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
    func(ptr);
    std::cout << "Use count " << ptr.use_count() << std::endl;

    {
        std::shared_ptr<Test> ptr1 = ptr;
        std::cout << "Use count " << ptr.use_count() << std::endl;
        {

            std::shared_ptr<Test> ptr12 = ptr;
            std::cout << "Use count " << ptr.use_count() << std::endl;
            ptr.reset();
        }
        std::cout << "Use count " << ptr.use_count() << std::endl;
    }
    std::cout << "Use count " << ptr.use_count() << std::endl;


    std::cout << "Part 3=================================================" << std::endl;

    std::shared_ptr<Account> acc1 = std::make_shared<Checkings_Account>("Peter", 3000, 1.5);
    std::shared_ptr<Account> acc2 = std::make_shared<Savings_Account>("Kyle", 2750, 2.5);
    std::shared_ptr<Account> acc3 = std::make_shared<Trust_Account>("Tony", 1500, 0.5);

    std::vector<std::shared_ptr<Account>> accounts;

    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);

    for(const auto &acc: accounts){
        std::cout << *acc << std::endl;
        std::cout << acc.use_count() << std::endl;
    }

    return 0;
}

