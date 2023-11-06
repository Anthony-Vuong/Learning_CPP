#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{
	// Initialize with default constructor
	Dog doug;
	
	Dog goofy;
	// goofy.name = "Goofy"; Error, attrs are private
	//goofy.age = 12;
	goofy.set_name("Goofy");
	goofy.set_age(12);
	
	cout << "Goofy is " << goofy.get_human_years() << " human years." << endl;
	goofy.speak();
	
	Dog *clifford = new Dog;
	clifford->set_name("Clifford");
	clifford->set_age(7);
	
	cout << "Clifford is " << clifford->get_human_years() << " human years." << endl;
	clifford->speak();
	
	//Using overloaded constructors
	Dog airbud("Airbud", 6);
	cout << "New dog named " << airbud.get_name() << " and he is " << airbud.get_age() << endl;
	
	Dog *pluto = new Dog("Pluto", 2);
	cout << pluto->get_name() << " joined the house and he is " << pluto->get_age() << endl;
	
	delete clifford;
	delete pluto;
	
	return 0;
}
