#pragma once
#include <iostream>
#include "Account.h"

class Checkings_Account : public Account
{
	friend std::ostream &operator<<(std::ostream &os, const Checkings_Account &account);

private:
	static constexpr const char* default_name = "Unnamed Checkings Account";
	static constexpr double default_balance = 0.0;
	static constexpr double default_flat_fee = 1.50;
protected:
	double flat_fee;

public:
	Checkings_Account(std::string name = default_name, double balance = default_balance, double flat_fee = default_flat_fee);
	bool deposit(double amount);
	bool withdraw(double amount);
	
};

