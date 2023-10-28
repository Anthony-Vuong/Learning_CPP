/* Exercise from section 9
 * 
 * Ask user for age and if user has a car instead of given.
 * Add an additional nested-if if the person has car but is not of age.
 * 
 * In this exercise you will use nested if  statements to decide if someone can drive. 
 * Let's assume that anyone 16 or older can legally drive, but they must also own a car to drive.
 * If the person is not 16 or older then you should display, "Sorry, come back in n  years 
 * and be sure you own a car when you come back.", where n is how many years until the person 
 * turns 16 year old. If the person is 16 or older but they do NOT own a car, then your program
 * should display, "Sorry, you need to buy a car before you can drive!" .If the person is
 * 16 or older and they DO own a car, then your program should display, "Yes - you can drive!"
 * The age  will be provided for you, you do NOT need to declare age .We will also automatically 
 * provide a boolean variable named has_car  which will be true  if the person owns a car or false  
 * otherwise.  Our test cases will provide different values for age  and has_car  to test your code.
 */
 
#include <iostream>

using namespace std;

int main()
{
	const int legal_driving_age{16};
	int age{0};
	char has_car{'N'};
	
	cout << "Lets see if you can drive!\n\n";
	
	cout << "Enter your age: ";
	cin >> age;
	
	cout << "\nEnter Y if you have a car, enter N if you do not: ";
	cin >> has_car;
	
	
	if(age >= legal_driving_age && has_car == 'Y'){
		cout << "Yes - you can drive!" << endl;
	}
	else if(age >= legal_driving_age && has_car == 'N'){
		cout << "Sorry, you need to buy a car before you can drive!" << endl;
	}
	else{
		int age_diff{legal_driving_age - age};
		
		cout << "Sorry, come back in " << age_diff;
		
		if(has_car == 'N'){
			cout << " years and be sure you own a car when you come back." << endl;
		}
		else{
			cout << " years and be sure you keep your car." << endl;
		}
		
	}
	
	
	return 0;
}
