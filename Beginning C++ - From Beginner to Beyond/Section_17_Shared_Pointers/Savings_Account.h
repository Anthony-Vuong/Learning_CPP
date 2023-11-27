#pragma once
#include "Account.h"

class Savings_Account : public Account
{
private:
	static constexpr const char* default_name = "Unnamed Savings Account";
	static constexpr double default_balance = 0.0;
	static constexpr double default_int_rate = 0.0;
protected:
	double int_rate;
public:
	Savings_Account(std::string name = default_name, double amount = default_balance, double int_rate = default_int_rate);
	// Copy Constructor
	Savings_Account(const Savings_Account& source);
	// Move constructor
	Savings_Account(Savings_Account&& source);
    // Virtual destructor
    virtual ~Savings_Account() = default;
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
};

