#include <iostream>
#include <memory>

// Class prototype definition 
class B;


// Simple class with single shared ptr attribute
class A{

private: 
    std::shared_ptr<B> ptrB;
public:
    // Set the ptrB attrib to passed in shared_ptr reference
    void setB(std::shared_ptr<B> &b){
        ptrB = b;
    }
    // Constructor and destructor
    A(){std::cout << "A class constructor" << std::endl;}
    ~A(){std::cout << "A class destructor" << std::endl;}

};

// Same as the class above
class B{

private: 
    std::shared_ptr<A> ptrA;
public:
    void setA(std::shared_ptr<A> &a){
        ptrA = a;
    }

    B(){std::cout << "B class constructor" << std::endl;}
    ~B(){std::cout << "B class destructor" << std::endl;}
};

class Test{

private:
    int data;
public:
    Test() :data{0} {std::cout << "Test constructor( " << data << ")" << std::endl;}
    Test(int data) :data{data} {std::cout << "Overload Test Constructor( " << data << ")" << std::endl;}
    int get_data() const {return data;}
    ~Test(){std::cout << "Test destructor(" << data << ")" << std::endl;}

};

void custom_deleter(Test *ptr){
    std::cout << "Using custom deleter function" << std::endl;
    delete ptr;
}

int main(){

    // Declare 2 shared_ptr variables from the classes above
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    
    // Call the functions from each class to set the shared_ptr
    b->setA(a);
    a->setB(b);

    /*The above code could lead to a memory leak. We'll need a custom deleter to make sure the allocated memory is properly freed*/
    

    // Using the custom deleter function
    {
            std::shared_ptr<Test> t1{new Test{200}, custom_deleter};
    }

    // Using lambda functions

    {
        std::shared_ptr<Test> t2(new Test{200}, 
            [](Test *ptr){
            std::cout << "Lambda delete pointer" << std::endl;
            delete ptr;
        });

    }

    return 0;
}
