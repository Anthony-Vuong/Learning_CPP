#pragma once
#include <string>

class Account
{
	friend std::ostream &operator<<(std::ostream &os, const Account &account);
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
	bool deposit(double amount);
	bool withdraw(double amount);
	double get_balance() const;
	Account& operator+=(double amount);
	Account& operator-=(double amount);
};

