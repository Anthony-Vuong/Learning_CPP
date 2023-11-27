#pragma once
#include <ostream>
#include "Savings_Account.h"


class Trust_Account : public Savings_Account
{
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
	// VIrtual destructor
    virtual ~Trust_Account() = default;
    virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
	int check_valid_withdrawal(double amount);
};

