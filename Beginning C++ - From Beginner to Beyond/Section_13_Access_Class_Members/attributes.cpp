#include <iostream>
#include <string>
#include <vector>

using namespace std;


//Player class
class Player{
	
public:
	//attributes
	string name;
	int health;
	int xp;
	
	//methods
	void talk(string text){
		cout << name << " says " << text << endl;
	}
	bool is_dead();
};

class Account{
	
public:
	//Attributes
	string name;
	double balance;
	
	//methods
	void deposit(double bal){
		cout << "Deposit " << endl;
		balance += bal;
	}
	
	void widthdraw(double bal){
		cout << "Widthdraw " << endl;
		balance -= bal;
	}
	
};



int main()
{
	Account tim_account;
	tim_account.name = "tim account";
	tim_account.balance = 500.0;
	
	tim_account.deposit(100.00);
	tim_account.widthdraw(300.00);
	
	Account *mary_account = new Account;
	(*mary_account).name = "mary_account";
	mary_account->balance = 1500.00;
	
	mary_account->deposit(500);
	mary_account->widthdraw(750);
	
	delete mary_account;
	
	Player peter;
	peter.name = "Peter";
	peter.health = 100;
	peter.xp = 1234;
	peter.talk("Hello!");
	
	// Pointer example
	Player *enemy = new Player;
	(*enemy).name = "Enemy";
	(*enemy).health = 100;
	enemy->xp = 100;
	enemy->talk("Be prepared player!");
	
	delete enemy;
	
	return 0;
}
