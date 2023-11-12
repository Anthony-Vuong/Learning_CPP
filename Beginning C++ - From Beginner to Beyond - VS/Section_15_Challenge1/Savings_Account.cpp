#include <string>
#include <iostream>
#include "Savings_Account.h"


// This class inherits base class attributes, initialize the derived class' base class inherited attributes
// in the constructor initialization list
Savings_Account::Savings_Account(std::string name, double amount, double int_rate)
	:Account(name, amount), int_rate{int_rate} {

}

bool Savings_Account::deposit(double amount) {
	balance += balance + (balance * (int_rate / 100));
	return Account::deposit(amount);
}


std::ostream& operator<<(std::ostream &os, const Savings_Account &account) {
	os << "[Savings Account " << account.name << ": " << account.balance << ", " << account.int_rate << "]" << std::endl;
	return os;
}
