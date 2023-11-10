#include <iostream>
#include "Account.h"


Account::Account()
	:balance{ 0 }, name{ "Account" } {
	std::cout << "Account Constructor called" << std::endl;
}

Account::~Account() {
	std::cout << "Account Destructor called" << std::endl;
}

void Account::deposit(double amount) {

	std::cout << "Account New deposit of: " << amount << std::endl;

}

void Account::withdraw(double amount) {
	std::cout << "Account New withdraw of: " << amount << std::endl;
}