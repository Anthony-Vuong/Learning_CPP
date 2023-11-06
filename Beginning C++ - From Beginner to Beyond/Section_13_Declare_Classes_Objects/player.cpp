#include <iostream>
#include <string>
#include <vector>

using namespace std;


//Player class
class Player{
	//attributes
	string name{"Player"};
	int health{100};
	int xp{0};
	
	//methods
	void talk(string);
	bool is_dead();
};

class Account{
	//Attributes
	string name{"Account"};
	double balance{0.0};
	
	//methods
	bool deposit(double);
	bool widthdraw(double);
	
};



int main()
{
	Account bob;
	Account tim;
	
	Player peter;
	Player tony;
	
	Player players[]{peter, tony};
	vector<Player> players1{peter};
	players1.push_back(tony);
	
	Player *enemy{nullptr};
	enemy = new Player;
	delete enemy;
	return 0;
}
