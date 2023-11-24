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


// Set of helper functions for Savings Account
void display(const std::vector<Savings_Account*> accounts) {
	std::cout << "\n=======================Savings Accounts==========================" << std::endl;
	for (const auto *acc : accounts) {
		std::cout << *acc << std::endl;
	}
}
void deposit(std::vector<Savings_Account*> accounts, double amount) {
	std::cout << "\n=======================Depositing Savings Accounts==========================" << std::endl;
	for (auto& acc : accounts) {
		if ((*acc).deposit(amount)) {
			std::cout << "Deposited " << amount << " in " << *acc << std::endl;
		}
		else {
			std::cout << "Failed deposit of " << amount << " in " << *acc << std::endl;
		}
	}
}
void withdraw(std::vector<Savings_Account*> accounts, double amount) {
	std::cout << "\n=======================Withdrawing Savings Accounts==========================" << std::endl;
	for (auto& acc : accounts) {
		if ((*acc).withdraw(amount)) {
			std::cout << "Withdrew " << amount << " in " << *acc << std::endl;
		}
		else {
			std::cout << "Failed withdrawal of " << amount << " in " << *acc << std::endl;
		}
	}
}


// Set of helper functions for Checkings Account
void display(const std::vector<Checkings_Account*> accounts) {
	std::cout << "\n=======================Checkings Accounts==========================" << std::endl;
	for (const auto *acc : accounts) {
		std::cout << *acc << std::endl;
	}
}

void deposit(std::vector<Checkings_Account*> accounts, double amount) {
	std::cout << "\n=======================Depositing Checkings Accounts==========================" << std::endl;
	for (auto& acc : accounts) {
		if ((*acc).deposit(amount)) {
			std::cout << "Deposited " << amount << " in " << *acc << std::endl;
		}
		else {
			std::cout << "Failed deposit of " << amount << " in " << *acc << std::endl;
		}
	}
}

void withdraw(std::vector<Checkings_Account*> accounts, double amount) {
	std::cout << "\n=======================Withdrawing Checkings Accounts==========================" << std::endl;
	for (auto& acc : accounts) {
		if ((*acc).withdraw(amount)) {
			std::cout << "Withdrew " << amount << " in " << *acc << std::endl;
		}
		else {
			std::cout << "Failed withdrawal of " << amount << " in " << *acc << std::endl;
		}
	}
}


// Set of helper functions for Trust Account
void display(const std::vector<Trust_Account*> accounts) {
	std::cout << "\n=======================Trust Accounts==========================" << std::endl;
	for (const auto *acc : accounts) {
		std::cout << *acc << std::endl;
	}
}
void deposit(std::vector<Trust_Account*> accounts, double amount) {
	std::cout << "\n=======================Depositing Trust Accounts==========================" << std::endl;
	for (auto& acc : accounts) {
		if ((*acc).deposit(amount)) {
			std::cout << "Deposited " << amount << " in " << *acc << std::endl;
		}
		else {
			std::cout << "Failed deposit of " << amount << " in " << *acc << std::endl;
		}
	}
}
void withdraw(std::vector<Trust_Account*> accounts, double amount) {
	std::cout << "\n=======================Withdrawing Trust Accounts==========================" << std::endl;
	for (auto& acc : accounts) {
		if ((*acc).withdraw(amount)) {
			std::cout << "Withdrew " << amount << " in " << *acc << std::endl;
		}
		else {
			std::cout << "Failed withdrawal of " << amount << " in " << *acc << std::endl;
		}
	}
}
