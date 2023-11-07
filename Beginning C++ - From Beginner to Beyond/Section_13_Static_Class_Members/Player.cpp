#include "Player.h"
#include <string>
#include <iostream>

int Player::num_players{0};

//Constructor
Player::Player(std::string name_val, int health_val, int xp_val)
	:name{name_val},health{health_val}, xp{xp_val}{
	++num_players;
	std::cout << "3 arg constructor" << std::endl;
}

//Copy Constructor
Player::Player(const Player &source)
	:Player(source.name, source.health,source.xp){
	std::cout << "Copy constructor" << std::endl;
}

//Destructor
Player::~Player()
{
	--num_players;
	std::cout << "Destructor " << std::endl;
}

int Player::get_num_players(){
	return num_players;
}

