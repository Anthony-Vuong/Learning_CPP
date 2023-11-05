#include <iostream>
#include <vector>

using namespace std;

//Paas by reference Examples
void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(vector<string> &v);

int main()
{
	int num{10};
	int another_num{20};
	
	cout << "Num before: " << num << endl;
	pass_by_ref1(num);
	cout << "Num after: " << num << endl;
	
	cout << "Num before: " << another_num << endl;
	pass_by_ref1(another_num);
	cout << "Num after: " << another_num << endl;
	
	string name{"Tony"};
	cout << "Name before: " << name << endl;
	pass_by_ref2(name);
	cout << "Name after: " << name << endl;
	
	vector<string> names{"Tony", "Peter", "Kyle"};
	cout << "Names before: ";
	print_vector(names);
	pass_by_ref3(names);
	cout << "\nNames after: ";
	print_vector(names);
	return 0;
}


// a copy of num is passed in from main - DOES NOT CHANGE num in main
void pass_by_ref1(int &num){
	num=1000;
}

void pass_by_ref2(string &s){
	s = "Changed";
}

void pass_by_ref3(vector<string> &v){
	v.clear();
}

void print_vector(vector<string> &v){
	for(auto name:v){
		cout << name << " ";
	}
}

