#include <iostream>

using namespace std;

class Dog{

public:
	//Atrributes
	string name;
	int age;
};


int main()
{
	
	Dog goofy;
	goofy.name = "Goofy";
	goofy.age = 12;
	
	Dog *clifford = new Dog;
	clifford->name = "Clifford";
	clifford->age = 7;
	
	delete clifford;
	
	return 0;
}
