#include <iostream>

using namespace std;

int find_max_element(const int* const arr, int size);
void reverse_array(int* arr, int size);
void display(const int *const arr, size_t size);

int main()
{
	int num_arr[]{0, 9, 2, 11, 3, 13};
	int size = sizeof(num_arr) / sizeof(num_arr[0]);
	
	int max = find_max_element(num_arr, size);
	
	cout << "The max is " << max << endl;
	
	display(num_arr, size);
	
	int arr[] = {1, 2, 3, 4, 5};
	int size1 = sizeof(arr) / sizeof(arr[0]);
	
	reverse_array(arr, size1);
	display(arr, size1);
	
	return 0;
}

void reverse_array(int* arr, int size) {
    for(int i{0}; i < size /2; i++){
		//we can swap the elemet at i and i*2
		int temp{0};
		temp = *(arr+i);
		*(arr+i) = *(arr+(size-i-1));
		*(arr+(size-i-1)) = temp;
	}
}

int find_max_element(const int* const arr, int size) {

    int largest{0};
	largest = *arr;
	
    for(int i{1}; i< size; i++){
        if(largest < *(arr+i)){
			largest = *(arr+i);
		}
         
    }
    
	return largest;
}

void display(const int *const arr, size_t size){
	for(size_t i{0}; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}