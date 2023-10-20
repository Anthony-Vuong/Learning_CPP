#include <iostream>

using namespace std;

int main()
{
	// Prints hello world with no end line
	//cout << "Hello World";
	
	// Hellow world will have no spaces
	// Prints Hello with no endl
	//cout << "Hello";
	// Prints World with endl
	//cout << "World" << endl;

	// Prints Hello World! with endline
	//cout << "Hello World!" << endl;
	// Prints Hello World! split between output operators
	//cout << "Hello" << " World!" << endl;
	// Same as above but with endline character
	//cout << "Hello" << "World!\n";
	//Prints Hello Out There with multiple new line characters in between
	//cout << "Hello\nOut\nThere\n";
	
	// 2 Integer variables and 1 double variable
	int num1;
	int num2;
	double num3;

	// User enters an integer and program prints it
	//cout << "Enter an integer: ";
	// Ignores white space, must press Enter to continue
	//cin >> num1;
	//cout << "You entered: " << num1 << endl;
	
	// User enters 2 integers and program prints them
	//cout << "Enter an integer: ";
	// Ignores white space, must press Enter to continue
	//cin >> num1;
	
	//cout << "Enter another integer: ";
	//cin >> num2;
	
	//cout << "You entered: " << num1 << " and " << num2 << endl;
	
	// If user enters 100, then 200 on the same input, both
	// integers are saved into the buffer. num1 will contain
	// the value 100 and num2 will contain 200
	// The program above will print the same results
	
	// Chaining integers with input operators
	//cout << "Enter 2 integers with a space in between: ";
	//cin >> num1 >> num2;
	//cout << "You entered: " << num1 << " and " << num2 << endl;
	
	// User enters a double and program prints it
	//cout << "Enter a double: ";
	//cin >> num3;
	//cout << "You entered: " << num3 << endl;
	
	
	// User enters an integer and program prints it
	cout << "Enter an integer: ";
	cin >> num1;
	
	// User enters a double and program prints it
	cout << "Enter a double: ";
	cin >> num3;
	
	cout << "The integer is: " << num1 << endl;
	cout << "You double is: " << num3 << endl;
	
	// If the user was going to enter 10.5 for the integer
	// prompt, the buffer will contain an integer and a double.
	// The integer will be 10 and the double will 0.5
	
	return 0;
}
