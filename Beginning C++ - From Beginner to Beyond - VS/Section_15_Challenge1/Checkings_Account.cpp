#include "Checkings_Account.h"

Checkings_Account::Checkings_Account(std::string name, double balance, double flat_fee) 
	:Account{ name, balance }, flat_fee{ flat_fee } {

}

bool Checkings_Account::deposit(double amount) {
	return Account::deposit(amount);
}

bool Checkings_Account::withdraw(double amount) {
	return Account::withdraw(amount + flat_fee);
}


std::ostream& operator<<(std::ostream& os, const Checkings_Account& account) {
	os << "[Checkings Account " << account.name << ": " << account.balance << ", " << account.flat_fee << "]" << std::endl;
	return os;
}