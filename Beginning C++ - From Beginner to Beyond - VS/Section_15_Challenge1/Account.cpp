#include <iostream>
#include "Account.h"

Account::Account(std::string name, double balance)
	:name{ name }, balance{ balance } {

}

bool Account::deposit(double amount) {
	if (amount < 0) {
		std::cout << "Error when depositing: " << amount << std::endl;
		return false;
	}
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if(balance - amount < 0){
		std::cout << "Error when withdrawing: " << amount << std::endl;
		return false;
	}
	balance -= amount;
	return true;
}

double Account::get_balance() const {
	return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
	os << "[Account " << account.name << ": " << account.balance << "]" << std::endl;
	return os;
}