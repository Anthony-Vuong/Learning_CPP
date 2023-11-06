#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{
	
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
	
	delete clifford;
	
	return 0;
}
