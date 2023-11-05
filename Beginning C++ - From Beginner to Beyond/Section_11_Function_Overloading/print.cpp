#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num){
	cout << "Printing int " << num << endl;
}

void print(double num){
	cout << "Printing double " << num << endl;
}

void print(string s){
	cout << "Printing string " << s << endl;
}

void print(string s1, string s2){
	cout << "Printing strings " << s1 + " " + s2 << endl;
}

void print(vector<string> l){
	for(auto s:l){
		cout << s << " " << endl;
	}
}

int main()
{
	//int print
	int num{100};
	print(num);
	
	//double print
	double num1{200.123};
	print(num1);
	
	//string print
	string s{"Cookie"};
	print(s);
	
	//2 string print
	string s2{"Chocolate"};
	print(s2, s);
	
	vector<string> ss{"Oreos", "Chips Ahoy", "Brownies"};
	print(ss);
	
	
	return 0;
}
