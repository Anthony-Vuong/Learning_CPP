#include <iostream>
#include <vector>

using namespace std;

void double_data(int *int_ptr){
	*int_ptr *= 2;
}

void swap(int *a, int *b){
	int temp{*a};
	*a = *b;
	*b = temp;
	
}

void display(const vector<string> *const vec){
	//*v.at(0); compile error, cannot change vector
	for(auto s: *vec){
		cout << s << " ";
	}
	cout << endl;
	
	//v= nullptr; compiler error cannot change pointer
}

void display1(int vec[], int sentinel){
	while(*vec != -1){
		cout << *vec++ << " ";
	}
	cout << endl;
}


int main()
{
	int value{10};
	int *int_ptr{nullptr};
	
	
	cout << "Double data with value var: ";
	double_data(&value);
	cout << value << endl;  // should be 20
	
	cout << "Double data with int_ptr var: ";
	int_ptr = &value;
	double_data(int_ptr);
	cout << value << endl;  // should be 40
	
	int_ptr = &value;
	
	cout << "Swap function " << endl;
	
	int a{5};
	int b{10};
	
	int *a_ptr{&a};
	int *b_ptr{&b};
	
	swap(a_ptr, b_ptr);
	
	cout << "a is " << a << " and b is " << b << endl;
	
	swap(&a, &b);
	
	cout << "a is " << a << " and b is " << b << endl;
	
	vector<string> vec{"Larry", "Moe", "Curly"};
	display(&vec);
		
	int vec_nums[]{100, 99, 92, 85, 80, -1};
	display1(vec_nums, -1);
	
	return 0;
}
