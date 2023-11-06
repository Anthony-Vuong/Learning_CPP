/* Section 12 Challenge
 * 
 * Write a C++ function named apply_all that expects two array of integers and
 * their sizes and dyanmically allocates a new array of integers whose size is
 * the product of the 2 array sizes.
 * 
 * The function should loop through the second array and multiply each element 
 * across each element of array 1 and store the product in the newly created array.
 * 
 * The function should return a pointer to the newly allocated array.
 * 
 * You can also write a print function that expects a pointer to an array of integers and its size
 *  and display the elements in the array.
 * 
 * 
 * 
*/


void print_array(const int* const arr, int size);
int *apply_all(int *arr1, int size1, int *arr2, int size2);

#include <iostream>

using namespace std;

int main()
{
	
	int array1[]{1, 2, 3, 4, 5};
	int array2[]{10, 20, 30};
	
	print_array(array1, 5);
	print_array(array2, 3);
	
	int *new_arr = apply_all(array1, 5, array2, 3);
	
	print_array(new_arr, 15);
	
	delete[] new_arr;
	return 0;
}

int *apply_all(int *arr1, int size1, int *arr2, int size2){
	
	int new_size{size1*size2};
	int *new_arr = new int[new_size];
	int iter{0};
	
	for(int i{0}; i<size1; i++){
		for(int j{0}; j<size2; j++){
			*(new_arr+iter) = *(arr1+i) * *(arr2+j);
			iter++;
		}
		
	}
	
	return new_arr;
	
}

// Using pointer offset notation to print array
void print_array(const int* const arr, int size){
	
	for(int i{0}; i<size; i++){
		cout << *(arr+i) << " ";
	}
	cout << endl;
}