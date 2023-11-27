#include "Checkings_Account.h"

Checkings_Account::Checkings_Account(std::string name, double balance, double flat_fee) 
	:Account{ name, balance }, flat_fee{ flat_fee } {

}

Checkings_Account::Checkings_Account(const Checkings_Account& source)
	:flat_fee{ source.flat_fee} {

}

Checkings_Account::Checkings_Account(Checkings_Account&& source)
	:flat_fee{ source.flat_fee } {
	source.flat_fee = 0;
}

bool Checkings_Account::deposit(double amount) {
	return Account::deposit(amount);
}

bool Checkings_Account::withdraw(double amount) {
	return Account::withdraw(amount + flat_fee);
}

void Checkings_Account::print(std::ostream &os) const{

	os << "[Checkings: " << name << " | " << balance << " | " << flat_fee << "]";
}

