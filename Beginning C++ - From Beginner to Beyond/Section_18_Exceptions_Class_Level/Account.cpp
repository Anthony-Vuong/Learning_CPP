#include <iostream>
#include "Account.h"
#include "InsufficientBalanceException.h"

Account::Account(std::string name, double balance)
	:name{ name }, balance{ balance } {
    if (balance < 0){
            throw InsufficientBalanceException();
    }
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

void Account::print(std::ostream &os) const{

    os << "Hello from Account";
}
