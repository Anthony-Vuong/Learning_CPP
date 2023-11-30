#include <iostream>
#include "Account_Util.h"

// Set of helper functions for Account
void display(const std::vector<Account*> accounts) {
	std::cout << "\n=======================Accounts==========================" << std::endl;
	for (const auto *acc:accounts) {
		std::cout << *acc << std::endl;
	}
}
void deposit(std::vector<Account*> accounts, double amount) {
	std::cout << "\n=======================Depositing Accounts==========================" << std::endl;
	for (auto *acc : accounts) {
		if ((*acc).deposit(amount)) {
			std::cout << "Deposited " << amount << " in " << *acc << std::endl;
		}
		else {
			std::cout << "Failed deposit of " << amount << " in " << *acc << std::endl;
		}
	}
}
void withdraw(std::vector<Account*> accounts, double amount) {
	std::cout << "\n=======================Withdrawing Accounts==========================" << std::endl;
	for (auto* acc : accounts) {
		if ((*acc).withdraw(amount)) {
			std::cout << "Withdrew " << amount << " in " << *acc << std::endl;
		}
		else {
			std::cout << "Failed withdrawal of " << amount << " in " << *acc << std::endl;
		}
	}
}


