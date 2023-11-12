#pragma once
#include "Account.h"

class Savings_Account : public Account
{
	friend std::ostream& operator<<(std::ostream &os, const Savings_Account &account);
private:
	static constexpr const char* default_name = "Unnamed Savings Account";
	static constexpr double default_balance = 0.0;
	static constexpr double default_int_rate = 0.0;
protected:
	double int_rate;
public:
	Savings_Account(std::string name = default_name, double amount = default_balance, double int_rate = default_int_rate);
	bool deposit(double amount);
	// Withdraw is inherited from Account class, no need to re-implement

};

