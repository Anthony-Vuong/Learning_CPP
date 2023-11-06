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
	void set_name(string n){
		name = n;
	}
	
	//Constructors
	Player(string name_val="None", int health_val=0, int xp_val=0);

};

//Constructors
Player::Player(string name_val, int health_val, int xp_val)
	:name{name_val},health{health_val}, xp{xp_val}{
	cout << "3 arg constructor" << endl;
}

int main()
{
	Player empty;
	Player peter{"Peter"};
	Player hero{"Hero", 120};
	Player tony{"Tony", 100, 4};

	return 0;
}
