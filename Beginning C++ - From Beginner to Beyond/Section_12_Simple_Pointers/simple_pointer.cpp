#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	
	int num{10};
	cout << "Value : " << num << endl;
	cout << "Size : " << sizeof num << endl;
	cout << "Address : " << &num << endl;
	
	int *p;
	cout << "\nValue : " << p << endl; // Garvage value bec p is not initialized
	cout << "Size : " << sizeof p << endl;
	cout << "Address : " << &p << endl;
	p = nullptr;
	cout << "Value : " << p << endl;
	
	
	int *p1{nullptr};
	double *p2{nullptr};
	unsigned long long *p3{nullptr};
	vector<string> *p4{nullptr};
	string *p5{nullptr};
	
	cout << "\nSize : " << sizeof p1 << endl;
	cout << "\nSize : " << sizeof p2 << endl;
	cout << "\nSize : " << sizeof p3 << endl;
	cout << "\nSize : " << sizeof p4 << endl;
	cout << "\nSize : " << sizeof p5 << endl;
	
	int score{10};
	double high_temp{100.7};
	
	int *score_ptr{nullptr};
	
	score_ptr = &score;
	//score_ptr = *high_temp;  YOU GET AN ERROR here
	cout << "Value score: " << score << endl;
	cout << "Size score : " << sizeof score << endl;
	cout << "Address : " << &score<< endl;
	cout << "Value of score ptr : " << score_ptr << endl;
	
	
	
	return 0;
}
