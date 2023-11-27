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


int main()
{
//    Test *t1 = new Test{1000};    
//    delete t1;


    std::unique_ptr<Test> t1 {new Test{10000}};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(5000);
    std::unique_ptr<Test> t3;

    //t3 = t1;  // This will give compiler error, copy semantics do not work in this case

    // Here we use move semantics to move t1's pointer, to the location of t3
    t3 = std::move(t1);

    if(!t1)
        std::cout << "T1 is nullptr" << std::endl;


    std::unique_ptr<Account> a1 = std::make_unique<Checkings_Account>("Peter, 1000");
    std::cout << *a1 << std::endl;

    std::vector<std::unique_ptr<Account>> accounts;

    accounts.push_back(std::make_unique<Checkings_Account>("Peter", 2500));
    accounts.push_back(std::make_unique<Savings_Account>("Tony", 500, 1.0));
    accounts.push_back(std::make_unique<Trust_Account>("Kyle", 1500, 0.5));

    for(auto &acc:accounts)
        std::cout << *acc << std::endl;

    return 0;
}

