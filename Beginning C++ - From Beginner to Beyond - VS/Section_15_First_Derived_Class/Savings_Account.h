#pragma once
#include "Account.h"

class Savings_Account : public Account
{
public:
	double int_rate;
	void deposit(double amount);
	void withdraw(double amount);
	Savings_Account();
	~Savings_Account();
};

