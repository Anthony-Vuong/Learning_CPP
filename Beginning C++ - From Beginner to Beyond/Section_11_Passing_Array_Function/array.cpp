#include <iostream>

using namespace std;

void print_array(int arr[], size_t size);
void set_array(int arr, size_t size, int value);

void print_array(int arr[], size_t size){
	for(size_t i{0}; i<size;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

//void print_array(const int arr[], size_t size){
//	for(size_t i{0}; i<size;i++){
//		cout << arr[i] << " ";
//	}
//	cout << endl;
// arr[0] = 10000; // This results in a compile error because the arr is const - cannot be changed READ ONLY
//}

void set_array(int arr[], size_t size, int value){
	for(size_t i{0}; i<size;i++)
		arr[i] = value;
	
}

int main()
{
	int my_scores[] {100, 99, 98, 97, 96};
	
	print_array(my_scores, 5);
	set_array(my_scores, 5, 100);
	print_array(my_scores, 5);
	
	return 0;
}
