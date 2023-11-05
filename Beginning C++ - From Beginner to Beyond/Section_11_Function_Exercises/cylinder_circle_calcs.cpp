#include <iostream>
#include <vector>
#include <string>

using namespace std;
const double pi{3.14159};

// Function prototypes, name of arg can be omitted but would be bad practice 
void area_circle();
double calc_area_circle(double radius);
void volume_cylinder();
double calc_volume_cylinder(double radius, double height);




int main()
{
	area_circle();
	volume_cylinder();

	return 0;
}

// Functions for exercise 2
double calc_area_circle(double radius){
	return pi*radius*radius;
}

void area_circle(){
	double radius{};
	cout << "\nEnter the radius of the circle: ";
	cin >> radius;
	
	cout << "The area of circle with radius " << radius << " is: "  << calc_area_circle(radius) << endl; 
}

// Functions for exercise 2
double calc_volume_cylinder(double radius, double height){
	return pi*radius*radius*height;
}

void volume_cylinder(){
	double radius{};
	double height{};
	cout << "\nEnter the radius of the cylinder: ";
	cin >> radius;
	
	cout << "\nEnter the height of the cylinder: ";
	cin >> height;
	
	cout << "The area of circle with radius " << radius <<  " and height " << height << " is "  << calc_volume_cylinder(radius, height) << endl; 
}
