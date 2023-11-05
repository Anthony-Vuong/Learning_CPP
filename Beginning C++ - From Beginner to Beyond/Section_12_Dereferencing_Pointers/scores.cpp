#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int score{100};
	int *score_ptr{&score};
	
	cout << *score_ptr << endl;
	
	*score_ptr = 200;
	
	cout << *score_ptr << endl;
	cout << score << endl;
	
	
	double high_temp{100.7};
	double low_temp{37.4};
	double *temp_ptr{&high_temp};
	
	cout << *temp_ptr << endl;
	temp_ptr = &low_temp;
	cout << *temp_ptr << endl;
	
	string name{"Peter"};
	//Initialized to the address of name var
	string *str_ptr{&name};
	
	// Derefernced pointer will print the value at the address of name
	cout << *str_ptr << endl;
	name = "Tony";
	cout << *str_ptr << endl;
	
	vector<string> stooges{"Larry", "Moe", "Curly"};
	vector<string> *vec_ptr{nullptr};
	
	// Points to the address of stooges
	vec_ptr = &stooges;
	
	cout << "First stooge " << (*vec_ptr).at(0) << endl;
	
	cout << "Stooges: ";
	for(auto stooge:*vec_ptr){
		cout << stooge << endl;
	}
	cout << endl;
	
	
	
	return 0;
}
