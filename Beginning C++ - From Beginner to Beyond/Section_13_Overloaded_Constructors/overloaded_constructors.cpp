#include <iostream>
#include <string>

using namespace std;

class Player{
	
private:
	//attributes
	string name{"Player"};
	int health;
	int xp;

public:	
	//methods
	void set_name(string n){
		name = n;
	}
	
	//Constructors
	Player(){
		cout << "No args constructor " << endl;
	}
	Player(string name){
		cout << "One string arg constructor " << endl;
	}
	Player(string name, int health, int xp){
		cout << "One string, 2 int args constructor " << endl;
	}
	~Player(){
		cout << "Destructor: " << name << endl;
	}
	
};

int main()
{
	// Use blocks for example
	{
		Player slayer;
		slayer.set_name("slayer");
	}
	
	{
		Player peter;
		peter.set_name("peter");
		Player hero("Hero");
		hero.set_name("Hero");
		Player villain("villain", 100, 0);
		villain.set_name("Villain");
	}
	
	Player *enemy = new Player;
	enemy->set_name("Enemy");
	Player *level_boss = new Player("LB", 100, 10);
	level_boss->set_name("LB");
	
	delete enemy;
	delete level_boss;
	
	return 0;
}
