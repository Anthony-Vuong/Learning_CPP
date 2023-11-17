#include <iostream>
#include "Account.h"

Account::Account(std::string name, double balance)
	:name{ name }, balance{ balance } {

}

Account::Account(const Account& source)
	:name{ source.name }, balance{source.balance} {
	
}

Account::Account(Account&& source)
	:name{ source.name }, balance{ source.balance } {
	source.name = nullptr;
	source.balance = 0;
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

Account& Account::operator+=(double amount) {
	deposit(amount);
	return *this;
}

Account& Account::operator-=(double amount) {
	withdraw(amount);
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
	os << "[Account " << account.name << ": " << account.balance << "]" << std::endl;
	return os;
}