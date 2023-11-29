#include <iostream>
#include <memory>
#include <vector>

// Function prototypes
class Test;
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>>, int num);
void display(const std::vector<std::shared_ptr<Test>>&vec);

class Test{

private:
    int data;
public:
    Test() :data{0} {std::cout << "Test constructor( " << data << ")" << std::endl;}
    Test(int data) :data{data} {std::cout << "Overload Test Constructor( " << data << ")" << std::endl;}
    int get_data() const {return data;}
    ~Test(){std::cout << "Test destructor(" << data << ")" << std::endl;}

};


std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(){
    
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> l;
    return l;


}
    
int main(){

    
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;

    vec_ptr = make();

    
    return 0;
}
