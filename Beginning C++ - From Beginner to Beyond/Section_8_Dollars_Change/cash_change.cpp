/*
 * Section 8 Challenge
 * 
 * For this program use US dollars and cents
 * 
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 * 
 * You may assume that the number of cents entered is greater than or equal to zero
 * 
 * The program should then display how to provide that change to the user.
 * 
 *  In the US:
 *  	1 dollar is 100 cents
 * 		1 quarter is 25 cents
 *  	1 dime is 10 cents
 * 		1 nickel is 5 cents
 * 		1 penny is 1 cent
 * 
 */

#include <iostream>

using namespace std;

int main()
{

	// Declare a variable to hold an integer representing cents
	int cents{0};
	// Declare a variable to hold an integer representing change
	int change{0};
	
	// Declare consts for the type of cents
	const int dollar{100};
	const int quarter{25};
	const int dime{10};
	const int nickel{5};
	const int penny{1};
	
	// Ask user to enter the number of cents
	cout << "Enter an amount in cents: ";
	cin >> cents;
	
	// Make the change given equal to number of cents provided
	change = cents;
	
	// Provide the change in the cents
	cout << "You can provide this change: " << endl;
	change /= dollar;
	cout << "Dollars: " << change << endl;
	cents -= (change*dollar);
	change = cents / quarter;
	cout << "Quarters: " << change << endl;
	cents -= (change*quarter);
	change = cents / dime;
	cout << "Dimes: " << change << endl;
	cents -= (change*dime);
	change = cents / nickel;
	cout << "Nickels: " << change << endl;
	cents -= (change*nickel);
	change = cents / penny;
	cout << "Pennies: " << change << endl;
	

	return 0;
}
