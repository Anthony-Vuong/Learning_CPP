#pragma once
#include <string>
#include "Printable.h"

class Account : public Printable
{
private:
	static constexpr const char* default_name = "Unnamed Account";
	static constexpr double default_balance = 0.0;
protected:
	std::string name;
	double balance;
public:
	// Overloaded Constructor
	Account(std::string name = default_name, double balance = default_balance);
	// Copy Constructor
	Account(const Account& source);
	// Move constructor
	Account(Account&& source);
    // Virtual destructor
    virtual ~Account(){}
	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	double get_balance() const;
    virtual void print(std::ostream &os) const override;
	Account& operator+=(double amount);
	Account& operator-=(double amount);
};

