/* Section 9 Looping Exercises
 * 
 * Exercise 1: For Loop through 1-15 and add all odd integers together
 * 
 * Exercise 2: Using range loop to loop through vector and determin
 * what integers are divisble by 3 or 5
 * 
 * Exercise 3: Using a while loop to determine how many integers are 
 * in a vector
 * 
 * Exercise 4: Nested loops, find all possible pairs, multiply them,
 * and add all together.
 * 
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
	 * Exercise 1: For Loops
	*/
	
	
	// Variable to keep trakc of sum off odd numbers
	int sum{0};
	
	// For loop, init i to 0, loop t0/including 15, increment by 1
	for(int i{0}; i <= 15; ++i){
		// Use conditional operator to return a 0 or i
		sum += i%2 != 0 ? i : 0;
		
	}
	
	// Print out the the result
	cout << "The sum of odd number 1-15 inclusive is: " << sum << endl;
	
	
	/*
	 * Exercise 2: Range based for loop
	*/
	
	// Vector of integers
	vector<int> vec1 {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
	vector<int> vec2 {};
	
	// Count of integers divisble by 3 or 5
	int count{0};
	
	// Using range based for loop, loop through vec vector
	for(auto num:vec1){
		count += num%3 == 0 || num%5 == 0 ? 1:0;
	}
	
	cout << "There are " << count << " numbers divisible by 3 or 5 in vec1." << endl;
	
	// Reset count to 0
	count = 0;
	
	// Can also explicitly use list in declaration
	for(auto num:{1,3,5,15,}){
		count += num%3 == 0 || num%5 == 0 ? 1:0;
	}
	
	cout << "There are " << count << " numbers divisible by 3 or 5 in vec2." << endl;
	
	
	/*
	 * Exercise 3: while loop
	*/
	

//	int num{0};
//	
//	vector<int> nums;
//	
//	// Ask user to enter 5 nums
//	while(nums.size() < 5){
//		
//		cout << "Enter a number between -100 and 100: ";
//		cin >> num;
//		
//		if(num >= 100 || num <= -100){
//			cout << "Number is not between -100 and 100. Try again!" << endl;
//		}
//		else{
//			nums.push_back(num);
//		}
//	}
//	
//	for(auto n:nums){
//		cout << n << ", " ;
//	}
//	
//	unsigned int i{0};
//	while(i < nums.size()){
//		if(nums.at(i) == -99){
//			break;
//		}
//		i++;
//	}
//	
//	cout << "\nThe vector has " << i << " integers." << endl;
	
	/*
	 * Exercise 4: Nested loops
	*/
	
	int sum1{0};
	int product{0};
	
	// Test case 1 = multiple elements
	vector<int> vec3{1, 2, 3, 4 ,5};
	
	unsigned int vector_size2{vec3.size()};
	
	if(vector_size2 == 1 || vector_size2 == 0){
		sum = 0;
	}
	else{
		for(unsigned int i{0}; i < vector_size2; i++){
			for(unsigned int j(vector_size2-1); j > i; j--){
			product = vec3.at(i)*vec3.at(j);
			sum1 += product;
			cout << vec3.at(i) << "x" << vec3.at(j) << " = "  << product << endl;
			}
		}
	}	
	
	cout << endl;
	
	// Test case 2, single element
	vector<int> vec4{1};
	sum1 = 0;
	unsigned int vector_size{vec4.size()};
	
	
	if(vector_size == 1 || vector_size == 0){
		sum = 0;
	}
	else{
		for(unsigned int i{0}; i < vector_size; i++){
			for(unsigned int j(vector_size-1); j > i; j--){
			product = vec4.at(i)*vec4.at(j);
			sum1 += product;
			cout << vec4.at(i) << "x" << vec4.at(j) << " = "  << product << endl;
			}
		}
	}	
	
	cout << "The final sum is " << sum1 << endl; 
	
	return 0;
}
