#pragma once
#include "Account.h"
#include "Savings_Account.h"
#include <vector>


// Set of helper functions for Account
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account>& accounts, double amount);


// Set of helper functions for Savings Account
void display(const std::vector<Savings_Account>& accounts);
void deposit(std::vector<Savings_Account>& accounts, double amount);
void withdraw(std::vector<Savings_Account>& accounts, double amount);