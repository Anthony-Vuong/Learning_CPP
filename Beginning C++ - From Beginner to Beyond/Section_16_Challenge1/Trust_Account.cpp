#include <iostream>
#include <string>
#include "Trust_Account.h"


Trust_Account::Trust_Account(std::string name, double amount, double int_rate, double bonus, int withdrawal_limit) 
	:Savings_Account{ name, amount, int_rate }, bonus{ bonus }, withdrawal_limit{ withdrawal_limit } {
}

bool Trust_Account::deposit(double amount) {
	if (amount >= bonus_qualifier) {
		balance += bonus; 
	}
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	int is_valid{ check_valid_withdrawal(amount) };
	if (is_valid == 1) {
		withdrawals++;
		return Savings_Account::withdraw(amount);
	}
	else if(is_valid == -1){
		std::cout << "Error when withdrawing: " << amount << std::endl;
		std::cout << amount << " is more than 20% of current balance of: " << balance << std::endl;
		return false;
	}
	else {
		std::cout << "Error when withdrawing: " << amount << std::endl;
		std::cout << "Max withdrawl limit reached. 3 withdrawals are allowed per year."  << std::endl;
		return false;
	}
}

int Trust_Account::check_valid_withdrawal(double amount) {
	bool is_twenty_percent{ amount <= balance * (withdrawal_max_rate / 100) };
	if (!is_twenty_percent) {
		return -1;
	}
	else if (withdrawals == withdrawal_limit) {
		return 0;
	}
	return 1;
}

void Trust_Account::print(std::ostream &os) const{
    os << "[Trust: " << name << " | " << balance << " | " << int_rate << " ]";
}
