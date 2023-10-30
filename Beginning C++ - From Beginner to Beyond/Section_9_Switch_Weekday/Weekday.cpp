/*
 * Section 9 Exercise
 * 
 * Use a switch statement to decide what day of the week it is, display the day and what chore
 * you must do that day!
 * 
 * 
 * 
*/



#include <iostream>

using namespace std;

int main(){
	
	char like_chore{};
	string question{"Do you like"};
	string chore{};
	
	// Create an enum for the day of the week
	enum Weekday{
		Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
	};
	
	// Declare a weekday using enum
	Weekday day{Saturday};
	
	
	switch(day){
		case Sunday:
			cout << "Today is Sunday." << endl;
			chore = "to take a day of rest";
			break;
		case Monday:
			cout << "Today is Monday." << endl;
			chore = "doing the dishes";
			break;
		case Tuesday:
			cout << "Today is Tuesday." << endl;
			chore = "leafblowing the driveway";
			break;
		case Wednesday:
			cout << "Today is Wednesday." << endl;
			chore = "cleaning the bathrooms and kitchen";
			break;
		case Thursday:
			cout << "Today is Thursday." << endl;
			chore = "mopping the floors";
			break;
		case Friday:
			cout << "Today is Friday." << endl;
			chore = "taking out the trash";
			break;
		case Saturday:
			cout << "Today is Saturday." << endl;
			chore = "washing your clothes";
			break;
		default:
			cout << "What kind of day is that? Either way, take the day off ;)" << endl;
	}
	
	cout << question << " " << chore << "? Enter Y for Yes and N for No: ";
	cin >> like_chore;
	
	if(like_chore == 'Y'){
		cout << "Awesome. Glad you like " << chore << "." << endl;
	}
	else{
		cout << "Too bad. I'm sorry you don't like " << chore << "." << endl;
	}
	
	
}

	
