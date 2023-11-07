#include <iostream>
#include <string>
#include "Player.h"

using namespace std;


void display_players(){
	cout << "Players: " << Player::get_num_players() << endl;
}

int main()
{
	display_players();
	const Player peter{"Peter", 100, 5};
	Player tony{"Tony", 100, 4};
	
	display_players();
	
	return 0;
}
