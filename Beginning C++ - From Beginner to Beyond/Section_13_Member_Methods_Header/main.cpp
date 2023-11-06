#include <iostream>
#include "Account.hpp"

using namespace std;

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
