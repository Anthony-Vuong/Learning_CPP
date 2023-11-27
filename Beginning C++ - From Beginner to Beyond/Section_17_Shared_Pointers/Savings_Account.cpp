#include <string>
#include <iostream>
#include "Savings_Account.h"
#include "Printable.h"

// This class inherits base class attributes, initialize the derived class' base class inherited attributes
// in the constructor initialization list
Savings_Account::Savings_Account(std::string name, double amount, double int_rate)
	:Account{ name, amount }, int_rate{ int_rate } {

}

Savings_Account::Savings_Account(const Savings_Account& source)
	: int_rate{source.int_rate} {

}

Savings_Account::Savings_Account(Savings_Account&& source)
	:int_rate{ source.int_rate } {
	source.int_rate = 0;
}


bool Savings_Account::deposit(double amount) {
	amount += (amount * (int_rate / 100));
	if (amount < 0) {
        std::cout << "Error when depositing: " << amount << std::endl;
        return false;
    }
    balance += amount;
    return true;

}

bool Savings_Account::withdraw(double amount) {
     if(balance - amount < 0){
         std::cout << "Error when withdrawing: " << amount << std::endl;
         return false;
     }
     balance -= amount;
     return true;
}

void Savings_Account::print(std::ostream &os) const{
    os << "[Savings: " << name << " | " << balance << " | " << int_rate << " ]";
}
