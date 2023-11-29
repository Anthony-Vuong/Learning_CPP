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


void fill(std::vector<std::shared_ptr<Test>>vec_ptr, int num){

    int temp{};

    for(int i{0}; i < num; i++){
        std::cout << "Enter an integer: ";
        std::cin >> temp;
        std::shared_ptr<Test>t = std::make_shared<Test>(temp);
        vec_ptr.push_back(t);
    }

}



int main(){

    
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;

    vec_ptr = make();

    std::cout << "How many data points do you wanto to create?";

    int num;

    std::cin >> num;

    fill(*vec_ptr, num);



    
    return 0;
}
