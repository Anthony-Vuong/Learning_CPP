#include <iostream>

using namespace std;

class Player{
	
private:
	//attributes
	string name{"Player"};
	int health;
	int xp;

public:	
	//methods
	string get_name(){return name;}
	int get_health(){return health;}
	int get_xp(){return xp;}
	
	//Constructors
	Player(string name_val="None", int health_val=0, int xp_val=0);
	//Copy constructor
	Player(const Player &source);
	//Destructor
	~Player(){
		cout << name << " destroyed" << endl; 
	}

};

//Constructors
Player::Player(string name_val, int health_val, int xp_val)
	:name{name_val},health{health_val}, xp{xp_val}{
	cout << "3 arg constructor" << endl;
}

//Copy constructor implementation
Player::Player(const Player &source)
	//:name{source.name},health{source.health}, xp{source.xp}
	:Player{source.name, source.health, source.xp}{
	cout << "Copy constructor for " << source.name << endl;
}

void display_player(Player p){
	cout << "Name " << p.get_name() << endl;
	cout << "Health " << p.get_health() << endl;
	cout << "Xp " << p.get_xp() << endl;
}

int main()
{
	Player empty;
	display_player(empty);
	
	Player peter{"Peter"};
	Player hero{"Hero", 120};
	Player tony{"Tony", 100, 4};

	return 0;
}
