#pragma once
#include "Account.h"
#include "Savings_Account.h"
#include "Checkings_Account.h"
#include "Trust_Account.h"
#include <vector>


// Set of helper functions for Account
void display(const std::vector<Account*> accounts);
void deposit(std::vector<Account*> accounts, double amount);
void withdraw(std::vector<Account*> accounts, double amount);

