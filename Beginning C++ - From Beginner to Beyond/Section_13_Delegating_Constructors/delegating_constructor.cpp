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
	Player();
	Player(string name);
	Player(string name_val, int health_val, int xp_val);

};

//Constructors
Player::Player()
	:Player{"None", 0, 0}{	
	cout << "No arg constructor" << endl;
}

Player::Player(string name_val)
	:Player{name_val, 0, 0}{
	cout << "1 arg constructor" << endl;	
}

Player::Player(string name_val, int health_val, int xp_val)
	:name{name_val},health{health_val}, xp{xp_val}{
	cout << "3 arg constructor" << endl;
}

int main()
{
	Player empty;
	Player peter{"Peter"};
	Player tony{"Tony", 100, 4};
	return 0;
}
