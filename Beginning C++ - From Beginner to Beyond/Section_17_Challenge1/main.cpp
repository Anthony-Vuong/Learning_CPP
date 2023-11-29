#include <iostream>
#include <memory>
#include <vector>

// Class Prototype
class Test;

// Function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>>&vec);

// Test class - simple class with a single integer attribute
class Test{

private:
    int data;
public:
    // No args constructor
    Test() :data{0} {std::cout << "Test constructor( " << data << ")" << std::endl;}
    // SIngle arg constructor
    Test(int data) :data{data} {std::cout << "Overload Test Constructor(" << data << ")" << std::endl;}
    // Since data is private, we can only access through class public function
    int get_data() const {return data;}
    // Destructor
    ~Test(){std::cout << "Test destructor(" << data << ")" << std::endl;}

};

/* This function will return a unique pointer of a vector of shared pointers to Test Objects */
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(){
    
    // make_unique will return a unique pointer of type vector of Test objects
    // Remember unique pointers cannot be copied only moved
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
   
}

/* This function will fill our vector of shared pointers of Test objects with user input data */
void fill(std::vector<std::shared_ptr<Test>> &vec_ptr, int num){

    // Temp integer variable to hold user input data points in the form of numbers
    int temp{};

    // Loop through until num is reached, ask user for data point input, create a shared pointer of type Test initialized to
    // temp value. Push the shared_ptr into vector
    for(int i{0}; i < num; i++){
        std::cout << "Enter an integer: ";
        std::cin >> temp;
        std::shared_ptr<Test>t = std::make_shared<Test>(temp);
        vec_ptr.push_back(t);
    }

}

/* This function will display the data points entered in the vector */
void display(const std::vector<std::shared_ptr<Test>>&vec){

        for(const auto &t: vec){
            std::cout << "Data is " << t->get_data() << std::endl;
        }

}

int main(){

   // Variale to hold number of desired data points
   int num{};
    
   // Variable that represents a unique pointer of a vector of shared pointers to Test objects
   std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;

   // Assign vec_ptr to return value of make(): returns the same type
   vec_ptr = make();

   // Ask user how many data points they want
   std::cout << "How many data points do you want to create? ";

   // Assign that value to int variable num
   std::cin >> num;

   // Fill vector with data points
   fill(*vec_ptr, num);

   // Display data points
   display(*vec_ptr);


    /*At this point the program will display all the data points entered into vec_ptr. 
     * Test constructor output statements will also be seen. After program is finished
     * running, Test object destructors will be called*/

   return 0;
}
