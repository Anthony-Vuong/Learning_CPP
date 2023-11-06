#include <iostream>

using namespace std;

class Account{

private:
	string name;
	double balance;

public:
	void set_balance(double bal){balance = bal;}
	double get_balance(){return balance;}
	
	void set_name(string n);
	string get_name();
	
	bool deposit(double amount);
	bool withdraw(double amount);
	
};

void Account::set_name(string n){
	name = n;
}

string Account::get_name(){
	return name;
}

bool Account::deposit(double amount){
	balance += amount;
	return true;
}

bool Account::withdraw(double amount){
	if(balance - amount < 0){
		return false;
	}
	balance -= amount;
	return true;
}



int main()
{
	Account peter_acct;
	peter_acct.set_name("Peter_Account");
	peter_acct.set_balance(100.0);
	
	if(peter_acct.deposit(500.0)){
		cout << "Deposit ok " << endl;
	}
	else{
		cout << "Deposit NOK" << endl;
	}
	if(peter_acct.withdraw(500.0)){
		cout << "Deposit ok " << endl;
	}
	else{
		cout << "Deposit NOK" << endl;
	}
	if(peter_acct.withdraw(200.0)){
		cout << "Withdraw ok " << endl;
	}
	else{
		cout << "Withdraw NOK" << endl;
	}
	
	return 0;
}
