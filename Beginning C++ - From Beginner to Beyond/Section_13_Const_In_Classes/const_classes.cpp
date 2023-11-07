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
	
	string get_name() const{
		return name;
	}
	
	//Constructors
	Player(string name_val="None", int health_val=0, int xp_val=0);

};

//Constructors
Player::Player(string name_val, int health_val, int xp_val)
	:name{name_val},health{health_val}, xp{xp_val}{
	cout << "3 arg constructor" << endl;
}

void display_player_name(const Player &p){
	cout << p.get_name() << endl;
}

int main()
{

	const Player peter{"Peter", 100, 5};
	Player tony{"Tony", 100, 4};
	
	// peter.set_name("Piper"); SHOULD NEVER WORK WITH CONST OBJECT CLASS
	
	cout << peter.get_name() << endl; // This will generate a compiler error as well if the object method is not const
	display_player_name(peter);
	
	cout << tony.get_name() << endl; // This will generate a compiler error as well if the object method is not const
	display_player_name(tony);

	return 0;
}
