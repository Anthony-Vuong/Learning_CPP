/* Section 10 Exercises
 * 
 * Exercise 1:
 * Begin by declaring and initializing the C-style string variable first_name to contain "Bjarne".
 * Now, declare and initialize a second C-style string variable last_name to contain "Stroustrup".
 * You must also declare a third C-style string variable whole_name but do not initialize it yet. 
 * Remember that the variable whole_name must be large enough to contain the first and last name 
 * with no whitespaces. Now, by using the C-style string function strlen, declare and initialize 
 * the variable first_name_length to contain the length of the first_name string and the variable 
 * last_name_length to contain the length of the last_name string. Using the C-style string function 
 * strcpy, copy the first_name string into the whole_name string variable. Now, by using the C-style 
 * string function strcat, concatenate the last_name string at the end of the whole_name string.
 * Finally, by using the C-style string function strlen, declare and initialize the variable whole_name_length 
 * to contain the length of the whole_name string.
 * 
 * 
*/





#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	/*
	 * Exercise 1: C String stuff 
	*/
	
	char first_name[8]{"Bjarne "};
	char last_name[11]{"Stroustrup"};
	char whole_name[20];
	
	// Declaring and assigning. not initialization technically?
	unsigned int first_name_length = strlen(first_name);
	int last_name_length = strlen(last_name);
	
	strcpy(whole_name, first_name);
	strcat(whole_name, last_name);
	
	
	int whole_name_length = strlen(whole_name);
	
	cout << "First name is " << first_name << " with length of " << first_name_length << endl;
	cout << "Last name is " << last_name << " with length of " << last_name_length << endl;
	cout << "Whole name is " << whole_name << " with length of " << whole_name_length << endl;
	
	return 0;
}
