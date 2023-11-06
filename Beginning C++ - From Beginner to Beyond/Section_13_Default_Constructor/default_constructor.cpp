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
	
	string get_name(){
		return name;
	}
	
	//Constructors - if no construct provided, compiler will make one that does nothing, but object can still be created
	
	// Default constructor
	Player(){
		name = "None";
		health = 50;
		xp = 5;
	}
//	Player(string name){
//		cout << "One string arg constructor " << endl;
//	}
	Player(string n, int h_val, int xp_val){
		name = name;
		health = h_val;
		xp = xp_val;
	}
//	~Player(){
//		cout << "Destructor: " << name << endl;
//	}
	
};

int main()
{
	Player tony;
	Player peter("Peter", 200, 25);
	peter.set_name("peter");
	cout << peter.get_name() << endl;
	
	
	return 0;
}
