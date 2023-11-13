#pragma once
#include <ostream>
#include "Savings_Account.h"


class Trust_Account : public Savings_Account
{
	// Friend funtion to send account information to cout
	friend std::ostream& operator<<(std::ostream &os, const Trust_Account &account);
private:
	static constexpr const char* default_name = "Unnamed Trust Account";
	static constexpr double default_balance = 0.0;
	static constexpr double default_int_rate = 0.0;
	static constexpr double default_bonus = 50.0;
	static constexpr int default_withdrawal_limit = 3;
protected:
	double bonus;
	int withdrawal_limit;
	double bonus_qualifier{ 5000.00 };
	// This is a percentage - must divide by 100 while in use
	double withdrawal_max_rate{ 20.00 };
	int withdrawals{ 0 };
public:
	Trust_Account(std::string name = default_name, double amount = default_balance, double int_rate=default_int_rate, double bonus = default_bonus, int withdrawal_limit = default_withdrawal_limit);
	bool deposit(double amount);
	bool withdraw(double amount);
	int check_valid_withdrawal(double amount);
};

