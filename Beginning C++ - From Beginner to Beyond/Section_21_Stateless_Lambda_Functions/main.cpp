#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

class Person {

    friend std::ostream& operator<<(std::ostream& os, const Person& rhs);

private:
    std::string name;
    int age;

public:
    Person(std::string name, int age):name{ name }, age{ age } {}
    Person(const Person &p):name{p.name}, age{p.age} {}
    ~Person() = default;
    std::string get_name() const {return name;}
    void set_name(std::string n) {this->name = n;}
    int get_age() const {return age;}
    void set_age(int a) {this->age = a;}
    

};

std::ostream& operator<<(std::ostream& os, const Person& rhs) {
    os << rhs.name << " " << rhs.age;
    return os;
}


void test1(){
    std::cout << "====================== TEST_1 =====================" << std::endl;
    [] () {std::cout << "Test 1 lambda function" << std::endl;}();

    [] (int x) {std::cout << x << std::endl;} (999);

    [] (int x, int y) {std::cout << x * y << std::endl;} (3, 10);

}

void test2(){
    std::cout << "\n====================== TEST_2 =====================" << std::endl;
    
    auto lambda1 = [] () {std::cout << "Hi from test 2!" << std::endl;};
    lambda1();

    int num1{55};
    int num2{2};

    auto lambda2 = [] (int x, int y) {std::cout << x * y << std::endl;};
    lambda2(2, 4);
    lambda2(num1, num2);

    auto lambda3 = [] (int &x, int y) {
        std::cout << "X: " << x << " Y: " << y << std::endl;
        x = 222;
        y = 34567;

    };

    lambda3(num1, num2);

    std::cout << "Num1: " << num1 << " Num2: " << num2 << std::endl;

}

void test3(){
    std::cout << "\n====================== TEST_3 =====================" << std::endl;
    Person stooge{"Larry", 21};

    std::cout << stooge << std::endl;

    auto lambda1 = [] (Person p) {std::cout << "Lambda stooge: " << p << std::endl;};
    lambda1(stooge);

    auto lambda2 = [] (const Person &p) {std::cout << p << std::endl;};
    lambda2(stooge);

    auto lambda3 = [] (Person &p) {
        std::cout << "Lambda 3: " << p << std::endl;

        p.set_name("Moe");
        p.set_age(25);

        std::cout << "Lambda 3.1: " << p << std::endl;
    };
    lambda3(stooge);
}

void filter_vector(const std::vector<int> &vec, std::function<bool(int)> func){
    std::cout << "[ ";
    for(int i: vec){
        if(func(i)){
            std::cout << i << " ";
        }
    }
    std::cout << " ]" << std::endl;
}

void test4(){
    std::cout << "\n====================== TEST_4 =====================" << std::endl;
    std::vector<int> nums{10, 25, 37, 41, 59, 62, 78, 85, 99};

    filter_vector(nums, [] (int x) {return x > 50;});
    
    filter_vector(nums, [] (int x) {return x <= 37;});

    filter_vector(nums, [] (int x) {return x >= 37 && x <= 62;});

}

auto make_lambda(){
    return [] () {std::cout << "Making of a lambda" << std::endl;};
}

void test5(){
    std::cout << "\n====================== TEST_5 =====================" << std::endl;
    auto lambda1 = make_lambda();
    lambda1();
}

void test6(){
    std::cout << "\n====================== TEST_6 =====================" << std::endl;
    auto lambda1 = [] (auto x, auto y) {std::cout << "X: " << x << " Y: " << y << std::endl;};

    lambda1(100, 200);
    lambda1(100.4, 333.333);
    lambda1("Hello", "Friend");

    lambda1(Person{"Tony", 26}, Person{"Peter", 27});

}

void test7(){
    std::cout << "\n====================== TEST_7 =====================" << std::endl;
    std::vector<Person> stooges{
        Person{"Tony", 28},
        Person{"Peter", 27},
        Person{"Kyle", 23}
    };

    std::sort(begin(stooges), end(stooges), [](const Person &p1, const Person &p2){
        return p1.get_name() < p2.get_name();
    });

    std::for_each(begin(stooges), end(stooges), [] (const Person &p){
        std::cout << p << std::endl;
    });

    std::cout << std::endl;
    
    std::sort(begin(stooges), end(stooges), [](const Person &p1, const Person &p2){
        return p1.get_age() < p2.get_age();
    });
    
    std::for_each(begin(stooges), end(stooges), [] (const Person &p){
        std::cout << p << std::endl;
    });

}

int main(){

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();

    return 0;
}
