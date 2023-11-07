#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
//	Mystring empty;
//	Mystring peter{"Peter"};
//	Mystring sib{peter};
//	
//	empty.display();
//	peter.display();
//	sib.display();

// 	Mystring a{"Hello"};
//	Mystring b;
//	b = a;
//	b = "This is a test";
	
//	Mystring a{"Hello"};
//	a = Mystring{"Hola"};
//	
//	a = "Bonjour"; 

	Mystring larry{"larry"};
	larry.display();

	larry = -larry;
	larry.display();
	
	cout << boolalpha << endl;
	Mystring moe{"Moe"};
	Mystring stooge = larry;
	
	cout << (larry == moe) << endl;
	cout << (larry == stooge) << endl;
	
	Mystring stooges = moe + "Larry";
	stooges.display();
	
	Mystring threestooges = moe + " " + larry + " " + "Curly";
	threestooges.display();

	
	return 0;
}
