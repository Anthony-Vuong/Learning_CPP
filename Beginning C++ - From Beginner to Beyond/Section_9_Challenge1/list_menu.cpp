/* Section 9 Challenge 1
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
*/ 

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	char user_selection{};
	vector<int> list{};
	int user_added_number{0}, smallest{0}, largest{0};
	double sum{0.0};
	
	while(true){
		
		cout << "P - Print numbers\n";
		cout << "A - Add a number\n";
		cout << "M - Display mean of the numbers\n";
		cout << "S - Display the smallest number\n";
		cout << "L - Display the largest number\n";
		cout << "Q - Quit\n\n";
		
		cout << "Enter your choice: ";
		cin >> user_selection;
		
		if(user_selection == 'Q' or user_selection == 'q'){
			cout << "\nGoodbye!" << endl;
			break;
		}
		else if(user_selection == 'P' or user_selection == 'p'){
			if(list.size() == 0){
				cout << "[] - the list is empty\n\n";
				continue;
			}
			cout << "[";
			for(unsigned int i{0}; i<list.size(); ++i){
				if(i == list.size()-1){
					cout << list.at(i);
					break;
				}
				cout << list.at(i) << " ";
			}
			cout << "]\n\n";
		}
		else if(user_selection == 'A' or user_selection == 'a'){
			cout << "Enter a number: ";
			cin >> user_added_number;
			list.push_back(user_added_number);
			sum += user_added_number;
			cout << user_added_number << " added.\n\n"; 
		}
		else if(user_selection == 'M' or user_selection == 'm'){
			if(list.size() == 0){
				cout << "Unable to calculate  the mean - no data.\n\n";
				continue;
			}
			double mean{0.000};
			mean = sum / list.size();
			cout << "The mean is: " << setprecision(4) << mean << setprecision(4) << endl;
		}
		else if(user_selection == 'S' or user_selection == 's'){
			if(list.size() == 0){
				cout << "Unable to determine the smallest number list is empty\n\n";
				continue;
			}
			unsigned int count{1};
			smallest = list.at(0);
			while(count < list.size()){
				if(smallest > list.at(count)){
					smallest = list.at(count);
				}
				count++;
			}
			cout << "The smallest number is: " << smallest << "\n\n";
			
		}
		else if(user_selection == 'L' or user_selection == 'l'){
			if(list.size() == 0){
				cout << "Unable to determine the largest number list is empty\n\n";
				continue;
			}
			unsigned int count{1};
			largest = list.at(0);
			while(count < list.size()){
				if(largest < list.at(count)){
					largest = list.at(count);
				}
				count++;
			}
			cout << "The largest number is: " << largest << "\n\n";
			
		}
		else{
			cout << "Unknown selection, please try again\n\n";
		}
	}
	return 0;
}
