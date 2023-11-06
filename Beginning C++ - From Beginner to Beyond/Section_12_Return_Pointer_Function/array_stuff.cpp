#include <iostream>

using namespace std;

int *create_array(size_t size, int init_val=0){
	int *new_storage{nullptr};
	new_storage = new int[size];
	for(size_t i{0}; i<size; i++){
		*(new_storage + i) = init_val;
	}
	return new_storage;
}

void display(const int *const vec, size_t size){
	for(size_t i{0}; i<size; i++){
		cout << vec[i] << " ";
	}
	cout << endl;
}

int main()
{
	
	int *num_arr{nullptr};
	size_t size;
	int init_val{};
	
	cout << "How many ints would you like to allocate? ";
	cin >> size;
	cout << "\nWhat would you like to initialize them to? ";
	cin >> init_val;
	
	num_arr = create_array(size, init_val);
	display(num_arr, size);
	
	delete [] num_arr;
	
	return 0;
}
