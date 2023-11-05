#include <iostream>

using namespace std;

int main()
{
	int scores[]{100, 99, 92, 87, 80, -1};
	int *score_ptr{scores};
	
	// in loop dereference pointer and compare until terminator reached
	while(*score_ptr != -1){
		cout << *score_ptr << " ";
		score_ptr++; // Moves to next element in array using pointer
	}
	cout << endl;
	cout << endl;
	
	score_ptr = scores;
	while(*score_ptr != -1){
		// This code will increment after using the score_ptr, use would be *score_ptr
		cout << *score_ptr++ << endl;
	}
	
	//Below prints from 100 to 0 bec (*score_ptr)++ dereferences first element of scores and decrements until -1
	//while(*score_ptr != -1){
	//	cout << (*score_ptr)-- << endl;
	//}
	cout << endl;
	cout << endl;
	
	string s1{"Peter"};
	string s2{"Peter"};
	string s3{"Tony"};
	
	string *p1{&s1};
	string *p2{&s2};
	string *p3{&s1};
	
	// When comparing pointers type does not matter, so p1==p2 would be false although the both contain the same exaxt string
	cout << boolalpha;
	cout << p1 << " == " << p2 << ": " << (p1==p2) << endl;
	cout << p1 << " == " << p3 << ": " << (p1==p3) << endl;
	
	// Dereference the pointers to compare
	cout << *p1 << " == " << *p2 << ": " << (*p1==*p2) << endl;
	cout << *p1 << " == " << *p3 << ": " << (*p1==*p3) << endl;
	
	p3 = &s3;
	cout << *p1 << " == " << *p3 << ": " << (*p1==*p3) << endl;
	
	
	cout << endl;
	cout << endl;
	
	char name[]{"Peter"};
	
	char *char_ptr1{nullptr};
	char *char_ptr2{nullptr};
	
	char_ptr1 = &name[0];
	char_ptr2 = &name[3];
	
	cout << "Char_ptr2 is " << char_ptr2 - char_ptr1 << " characters away from char_ptr1." << endl;
	
	
	
	return 0;
}
