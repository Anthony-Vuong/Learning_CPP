/* Section 11 Challenge 1
 * 
 * This challenge is about using a collection(list) of integers
 * and allowing the user to select optiond from a menu to perform
 * operations on the list.
 * 
 * Your program should display a menu options to the user as follows:
 * 
 * 	P - Print numbers
 *  A - Add a number
 *  M - Display mean of the numbers
 * 	S - Display the smallest number
 *  L - Display the largest number
 *  Q - Quit
 * 
 *  Enter your choice:
 * 
 * The program should only accept valid choices from the user, both
 * upper and lowercase selctions should be allowed. If an illegal
 * choice is made, you should display, " Unknown selection, please try
 * again" and the menu options should be displayed again.
 * 
 * 'P' or 'p': you should display all of the elements(ints)
 * in the list. If the list is empty you should display "[] - the list is empty"
 * If the list is not empty then all the list elements should be displayed
 * inside the square brackets seperated by a space. For example: [1 2 3 4 5]
 * 
 * 'A' or 'a': you should prompt the user for an integer to add to the list
 * which you will add to the list and then display it was added. For example
 * if the user enters 5, you should display "5 added". Duplicate entries are ok.
 * 
 * 'M' or 'm': you should calculate the mean or average of the elements in the
 * list and display it. If the list is empty you should display, 'Unable to calculate
 * the mean - no data"
 * 
 * 'S' or 's': you should display the smallest element in the list. For example
 * if the list contains [2 4 5 1] you should display, "The smallest number is 1"
 * If the list is empty you should display, "Unable to determine the smallest number
 * - list is empty"
 * 
 * 'L' or 'l': you should display the largest element in the list. For example
 * if the list contains [2 4 5 1] you should display, "The largest number is 5"
 * If the list is empty you should display, "Unable to determine the largest number
 * - list is empty"
 * 
 * 'Q' or 'q': you should display 'Goodbye' and the program should terminate.
 * 
 * UPDATE: For section 11, modularize the program into functions
 * 
 * 
*/ 

#include <iostream>
#include <vector>
#include <iomanip>



using namespace std;

// Function prototypes
void display_options();
char ask_user_input(char &user_selection);
void print_list(const vector<int>);
void add_to_list(vector<int> &vec_int, double &sum);
void mean_of_list(const vector<int> vec_int, double sum);
void find_largest(const vector<int> vec_int);
void find_smallest(const vector<int> vec_int);
void run_program( );

int main()
{
	run_program();
	return 0;
}

void display_options(){
	cout << "P - Print numbers\n";
	cout << "A - Add a number\n";
	cout << "M - Display mean of the numbers\n";
	cout << "S - Display the smallest number\n";
	cout << "L - Display the largest number\n";
	cout << "Q - Quit\n\n";
	
}

char ask_user_input(char &user_selection){
	cout << "Enter your choice: ";
	cin >> user_selection;
		
	return user_selection;
}

void print_list(const vector<int> vec_int){
	cout << "[";
	for(unsigned int i{0}; i<vec_int.size(); ++i){
		if(i == vec_int.size()-1){
			cout << vec_int.at(i);
			break;
		}
		cout << vec_int.at(i) << " ";
	}
	cout << "]\n\n";
	
}

void add_to_list(vector<int> &vec_int, double &sum){
	int user_added_number{0};
	cout << "Enter a number: ";
	cin >> user_added_number;
	vec_int.push_back(user_added_number);
	sum += user_added_number;
	cout << user_added_number << " added.\n\n"; 
	
}

void mean_of_list(const vector<int> vec_int, double sum){
	double mean{0.000};
	mean = sum / vec_int.size();
	cout << "The mean is: " << setprecision(4) << mean << setprecision(4) << endl;
}


void find_largest(const vector<int> vec_int){
	unsigned int count{1};
	int largest = vec_int.at(0);
	while(count < vec_int.size()){
		if(largest < vec_int.at(count)){
			largest = vec_int.at(count);
		}
		count++;
	}
	cout << "The largest number is: " << largest << "\n\n";
}
void find_smallest(const vector<int> vec_int){
	unsigned int count{1};
	int smallest = vec_int.at(0);
	while(count < vec_int.size()){
		if(smallest > vec_int.at(count)){
			smallest = vec_int.at(count);
		}
		count++;
	}
	cout << "The smallest number is: " << smallest << "\n\n";
}

void run_program(){
	char user_selection{};
	vector<int> list{};
	double sum{0.0};
	
	while(true){
		
		display_options();
		ask_user_input(user_selection);
		
		if(user_selection == 'Q' or user_selection == 'q'){
			cout << "\nGoodbye!" << endl;
			break;
		}
		else if(user_selection == 'P' or user_selection == 'p'){
			if(list.size() == 0){
				cout << "[] - the list is empty\n\n";
				continue;
			}
			print_list(list);
		}
		else if(user_selection == 'A' or user_selection == 'a'){
			add_to_list(list, sum);
			
		}
		else if(user_selection == 'M' or user_selection == 'm'){
			if(list.size() == 0){
				cout << "Unable to calculate  the mean - no data.\n\n";
				continue;
			}
			mean_of_list(list, sum);
		}
		else if(user_selection == 'S' or user_selection == 's'){
			if(list.size() == 0){
				cout << "Unable to determine the smallest number list is empty\n\n";
				continue;
			}
			find_smallest(list);
		}
		else if(user_selection == 'L' or user_selection == 'l'){
			if(list.size() == 0){
				cout << "Unable to determine the largest number list is empty\n\n";
				continue;
			}
			find_largest(list);
		}
		else{
			cout << "Unknown selection, please try again\n\n";
		}		
	}	
}