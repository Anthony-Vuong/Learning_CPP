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
	void talk(string text){
		cout << name << " says " << text << endl;
	}
	bool is_dead();
};

int main()
{
	Player peter;
	//peter.name = "Peter";  Compile error bec, name is private
	//cout << peter.health << endl; Compile error bec, name is private
	peter.talk("Hello!");
	
	return 0;
}
