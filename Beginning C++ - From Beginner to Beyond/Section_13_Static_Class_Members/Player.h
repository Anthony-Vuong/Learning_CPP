#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
	
private:
	//
	static int num_players;
	//attributes
	std::string name;
	int health;
	int xp;

public:	
	//methods
	void set_name(std::string n){
		name = n;
	}
	
	std::string get_name() const{
		return name;
	}
	
	//Constructor
	Player(std::string name_val="None", int health_val=0, int xp_val=0);
	//Copy Constructor
	Player(const Player &source);
	//Destructor
	~Player();
	
	static int get_num_players();
};


#endif // PLAYER_H
