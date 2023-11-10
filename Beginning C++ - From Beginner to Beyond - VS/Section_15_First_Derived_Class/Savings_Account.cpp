#include "Savings_Account.h"
#include <iostream>


Savings_Account::Savings_Account() 
	:int_rate{ 3.0 } {
	std::cout << "Savings_Account Constructor called" << std::endl;
}

Savings_Account::~Savings_Account() {
	std::cout << "Savings_Account Destructor called" << std::endl;
}

void Savings_Account::deposit(double amount) {

	std::cout << "Savings New deposit of: " << amount << std::endl;

}

void Savings_Account::withdraw(double amount) {
	std::cout << "Savings New withdraw of: " << amount << std::endl;
}