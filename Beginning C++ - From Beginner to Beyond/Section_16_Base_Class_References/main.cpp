#include <iostream>


class Account{

public:
        virtual void withdraw(int amount){
            std::cout << "Account WIthdraw" << std::endl;
        }

        virtual ~Account() {}

};


class Trust : public Account{

public:
        virtual void withdraw(int amount){
            std::cout << "Trust account withdraw" << std::endl;
        }

        virtual ~Trust() {}

};

void do_withdraw(Account &acc, int amount){
        acc.withdraw(amount);
}

    
int main(){

    Account a;
    Account &ref = a;
    ref.withdraw(1000);

    Trust t;
    Trust &ref1 = t;
    ref1.withdraw(1000);

    Account a1;
    Trust t1;

    do_withdraw(a1, 2000);
    do_withdraw(t1, 2000);



    return 0;
}
