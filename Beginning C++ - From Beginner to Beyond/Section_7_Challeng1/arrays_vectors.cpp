#include <iostream>
#include <vector>

/* Section 7 Challenge 
 * 
 * Declare 2 empty vectors of integers named
 * vector1 and vector2.
 * 
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display the elements in vector1 using the at() as well
 * as its size using the size() method
 * 
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector1 using the at() as well
 * as its size using the size() method
 * 
 * Declare an empty 2D vector called vector_2d
 * 
 * Add vector1 to vector_2d dynamically using push back
 * Add vector2 to vector_2d dynamically using push back
 * 
 * Display the elements in vector_2d using the at() method
 * 
 * Change vector1.at(0) to 1000
 * 
 * Display the elements in vector_2d again using the at() method
 * 
 * Display the elements in vector1 
 * 
*/



using namespace std;

int main()
{
	
	// Declare 2 vectors
	vector <int> vector1;
	vector <int> vector2;
	
	// Add elements to vector1
	vector1.push_back(10);
	vector1.push_back(20);
	
	// Print the elements of vector1 and vector1 size
	cout << "Elements of Vector1: " << vector1.at(0) << " " << vector1.at(1) << endl;
	cout << "The size of Vector1: " << vector1.size() << endl;
	
	// Add elements to vector2
	vector2.push_back(100);
	vector2.push_back(200);
	
	// Print the elements of vector2 and vector2 size
	cout << "\nElements of Vector2: " << vector2.at(0) << " " << vector2.at(1) << endl;
	cout << "The size of Vector2: " << vector2.size() << endl;
	
	// Declare 2d vector
	vector <vector<int>> vector_2d;

	// Add vector1 and vector2 to vector_2d
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	// Print the elements of vector_2d
	cout << "\nRow1 Elements of vector_2d: " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << "Row2 Elements of vector_2d: " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
	// Change vector1 first element
	vector1.at(0) = 1000;
	
	// Print the elements of vector_2d
	cout << "\nRow1 Elements of vector_2d: " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << "Row2 Elements of vector_2d: " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
	// Print elements of vector1
	cout << "\nElements of Vector1: " << vector1.at(0) << " " << vector1.at(1) << endl;
	
	return 0;
}
