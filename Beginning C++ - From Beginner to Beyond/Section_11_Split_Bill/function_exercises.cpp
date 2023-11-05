/* Section 10 Exercises
 * 
 * Exercise 1
 * In this exercise you will create a program that will be used as a 
 * POS (Point of Sale) system in a restaurant. The bill_total is given 
 * as well as the number_of_guests. The 5 guests will be splitting the 
 * bill evenly and so the individual_bill will be bill_total / number_of_guests. 
 * The POS will be used in three different locations, each with different 
 * guidelines for printing bills.
 * At location 1, individual_bill_1 always rounds down to the nearest dollar.
 * At location 2, individual_bill_2 always rounds to the nearest dollar.
 * At location 3, individual_bill_3 always rounds up to the nearest cent.
 * Determine what the individual_bill will be at each of the locations.
 * Begin by declaring and initializing individual_bill.
 * Now, declare and initialize individual_bill_1 by using the <cmath> 
 * function floor with individual_bill as the argument.
 * Next, declare and initialize individual_bill_2 by using the <cmath> 
 * function round with individual_bill as the argument.
 * Finally, declare and initialize individual_bill_3 by using the <cmath> 
 * function ceil with individual_bill as the argument. In order to round individual_bill_3 
 * to the nearest cent, you must multiply the argument of the function ceil by 
 * 100 and then divide the result of the function by 100.
 * 
 * Exercise 2
 * In this exercise you will create a program that will be used to convert 
 * Fahrenheit temperatures to Celsius and Kelvin temperatures through the 
 * use of two functions. For this program, assume that temperature will be 
 * represented as a double value. Begin by defining the function prototypes 
 * for the functions fahrenheit_to_celsius and fahrenheit_to_kelvin which 
 * are both passed a double value and return a double value. Now, at the 
 * bottom of the file, write the full definitions of both functions. The function 
 * fahrenheit_to_celsius is passed a Fahrenheit temperature and returns a 
 * rounded Celsius temperature. You may use the <cmath> function round in 
 * order to round the return value. The formula to convert Fahrenheit to 
 * Celsius is (5.0/9.0)*(temperature - 32). The function fahrenheit_to_kelvin 
 * is passed a Fahrenheit temperature and returns a rounded Kelvin temperature. 
 * The formula to convert Fahrenheit to Kelvin is (5.0/9.0)*(temperature - 32) + 273.
 * Remember the rules of PEMDAS when defining the body of your functions. Now, from 
 * the temperature_conversion function, declare and initialize the variables 
 * celsius_temperature and kelvin_temperature by calling the appropriate functions 
 * which you have just defined and passing the variable fahrenheit_temperature.
 * You do not need to declare or initialize fahrenheit_temperature as it is already 
 * available to you as a parameter of the temperature_conversion function.
 * 
 * 
 * Exercise 3
 * In this exercise you will create a program that will be used to automatically 
 * print a grocery list. Most weeks the grocery list is the same and so you may 
 * begin by declaring the function prototype print_grocery_list which has the default 
 * argument values:

		mangos = 13

		apples = 3

		oranges = 7

 * The function print_grocery_list has no return statement and so the return type of 
 * the function prototype should be void.
 * IMPORTANT: Before declaring the function prototype, read the entire exercise to 
 * determine the proper order of arguments in the function parameter list. Remember 
 * that default argument values that do not change should be placed at the tail end 
 * of the parameter list, and those which change most often should be placed at the beginning.
 * Once the function prototype is declared, complete the parameter list of the function 
 * definition at the bottom of the file. Now, print this weeks grocery list by calling 
 * the function print_grocery_list from the function body of modify_grocery_list.
 * The next week, you decide that you would like 5 apples instead of 3. Print the new 
 * grocery list by calling the function print_grocery_list from the function body of 
 * modify_grocery_list and passing the new apples argument. For the final week,  you are 
 * having a party and would like to serve a fruit punch so you will need 7 apples, 11 oranges, 
 * and the default number of mangos. Print the new grocery list by calling the function print_grocery_list 
 * from the function body of modify_grocery_list and passing the new apples and oranges arguments. 
 * 
 * Exercise 4
 * In this exercise you will create a program that computes the area of two shapes, a square and a 
 * rectangle, by calling the overloaded function find_area. Begin by declaring the function prototypes 
 * for the square find_area function and the rectangle find_area function. The square find_area function 
 * is passed an integer value and returns an integer value. The rectangle find_area function is passed 
 * two double values and returns a double value. Remember that both function prototypes should have 
 * the same function name find_area. Now that the function prototypes have been declared,  at the bottom 
 * of the file define both functions. The square find_area function will be passed the argument side_length 
 * and return the area of the square. The formula for the area of a square is side_length*side_length . 
 * You may use the <cmath> function pow to compute this value if you wish. The rectangle find_area function 
 * will be passed the arguments length and width and return the area of the rectangle. The formula for the 
 * area of a rectangle is length*width. Now, from the function body of area_calc, declare and initialize 
 * the variables square_area and rectangle_area by calling the find_area function and passing the appropriate 
 * arguments which are listed below. The square has a side_length of 2. The rectangle has a length of 4.5 and a width of 2.3.
 * 
 * Exercise 5
 * In this exercise you will create a program that will be used to print the guest_list to an event and then 
 * clear the guest_list when the event is over. Begin by completing the function prototypes print_guest_list 
 * and clear_guest_list which are both passed an array of std::string and a size_t value. Ensure that the 
 * array cannot be modified within the print_guest_list function by using the keyword const in the parameter list.
 * Now that the function prototypes have been declared, at the bottom of the file define both functions.
 * Both the print_guest_list and clear_guest_list functions will be passed the array argument guest_list and 
 * the size_t argument guest_list_size which have both been provided to you. The print_guest_list function 
 * should print the values contained within the guest_list from left to right with each element being printed 
 * on a new line.  Use a for loop to iterate through the array. The clear_guest_list function should replace 
 * each element of the array with the string value " ", a single space.  Use a for loop to iterate through the array.
 * Now, from the function body of event_guest_list, make the following function calls in this order:
 * 
 * print_guest_list
 * clear_guest_list
 * print_guest_list
 *
 * and passing the array argument guest_list and the size_t argument guest_list_size with each function call.
 * 
 * 
*/


#include <iostream>
#include <cmath>
using namespace std;

// Exerscise 5 Function Prototypes
void print_guest_list(const string list[], size_t size);
void clear_guest_list(string list[], size_t size);
void event_guest_list();

// Exerscise 4 Function Prototypes
int find_area(int);
double find_area(double, double);
void area_calc();


// Exerscise 3 Function Prototypes
void print_grocery_list(int apples=3, int oranges=7, int mangos=13);
void modify_grocery_list();

// Exercise 2 Function Prototypes
double fahrenheit_to_celsius(double temperature);
double fahrenheit_to_kelvin(double temperature);
void temperature_conversion(double temperature);

int main()
{
	
	/*
	 * Exercise 1 
	*/
	
	double bill_total {102.78};
    int number_of_guests {5};
	
	
	double individual_bill {bill_total / number_of_guests};
	double individual_bill_1 {floor(bill_total / number_of_guests)};
	double individual_bill_2 {round(bill_total / number_of_guests)};
	double individual_bill_3 {round((bill_total / number_of_guests)*100) /100};
	
	cout << "The individual bill will be $" << individual_bill << "\n" <<
	"The individual bill at location 1 will be $" << individual_bill_1 << "\n" 
	<< "The individual bill at location 2 will be $" << individual_bill_2 
	<< "\n" << "The individual bill at location 3 will be $" << individual_bill_3;
	
	/*
	 * Exercise 2 
	*/
	
	double temperature{75.0};
	temperature_conversion(temperature);
	
	
	/*
	 * Exercise 3 
	*/
	
	modify_grocery_list();
	
	/*
	 * Exercise 4 
	*/
	area_calc();
	
	
	/*
	 * Exercise 5 
	*/
	event_guest_list();
	
	return 0;
}

void event_guest_list(){
	string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};
	
	print_guest_list(guest_list, guest_list_size);
	clear_guest_list(guest_list, guest_list_size);
	print_guest_list(guest_list, guest_list_size);
}

void print_guest_list(const string list[], size_t size){
	for(size_t i{0}; i<size; i++){
		cout << list[i] << endl;
	}
}
void clear_guest_list(string list[], size_t size){
	for(size_t i{0}; i<size; i++){
		list[i] = " ";
	}
}

void area_calc(){
	
	cout << "Area of square given length of 2 is " << find_area(2) << endl;
	cout << "Area of rectangle given length of 4.5 and height of 2.3 is " << find_area(4.5, 2.3) << endl;
	
}

int find_area(int side_length){
	return pow(side_length, 2);
}

double find_area(double width, double length){
	return length*width;
}


void print_grocery_list(int apples, int oranges, int mangos){
	cout << "\nMangos, apple, oranges: " << apples << " " << oranges << " "  << mangos << endl;
}

void modify_grocery_list(){
	
		print_grocery_list();
		print_grocery_list(5);
		print_grocery_list(7, 11);

}


void temperature_conversion(double temperature){
	double celcius_temp{fahrenheit_to_celsius(temperature)};
	double kelvin_temp{fahrenheit_to_kelvin(temperature)};
	
	
	cout << "\n" << temperature << " degrees fahrenheit to celsius is " << celcius_temp;
	cout << "\n" << temperature << " degrees fahrenheit to kelvin is " << kelvin_temp;
	
}

// Function definition, temperature passed in is fahrenheit
double fahrenheit_to_celsius(double temperature){
	return round((5.0/9.0)*(temperature - 32));
}

double fahrenheit_to_kelvin(double temperature){
	return round(((5.0)*(temperature - 32)/9.0) + 273);
}