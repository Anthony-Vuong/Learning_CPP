#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

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
    std::cout << "===================== TEST_1 =====================" << std::endl;

    std::vector<int> v{1, 11, 22, 33, 44, 55, 66, 77 , 88, 99};

    std::for_each(v.begin(), v.end(), [] (int num) {

        std::cout << num << " ";

    });
    
    std::cout << std::endl << std::endl;

}


void test2(){
    std::cout << "===================== TEST_2 =====================" << std::endl;
    
    struct Point{

        int x;
        int y;

    };

    Point p1{1, 2};
    Point p2{4, 3};
    Point p3{3, 5};
    Point p4{3, 1};

    std::vector<Point> t1{p1, p2, p3};
    std::vector<Point> t2{p2, p3, p1};
    std::vector<Point> t3{p1, p2, p4};

    if(std::is_permutation(t1.begin(), t1.end(), t2.begin(), [] (Point lhs, Point rhs){
        return lhs.x == rhs.x && lhs.y == rhs.y;    
        }))
    {
        std::cout << "T1 and T3 are equivalent." << std::endl;
    }
    else{
        std::cout << "T1 and T3 are not equivalent." << std::endl;
    }

    std::cout << std::endl;

}

void test3(){
    std::cout << "===================== TEST_3 =====================" << std::endl;
    
    std::vector<int> test_scores{95, 88, 97, 76, 59, 100};
    int bonus_points{5};

    std::transform(test_scores.begin(), test_scores.end(), test_scores.begin(), [bonus_points] (int score) {
        return score += bonus_points;

    });

    for(int score: test_scores){
        std::cout << score << std::endl;
    }
}


void test4(){
    std::cout << "===================== TEST_4 =====================" << std::endl;

    std::vector<int> nums{1, 2, 3, 4 ,5};
    
    nums.erase(std::remove_if(nums.begin(), nums.end(), [] (int num){

        return num % 2 ==0;

    }), nums.end());

    for(int num:nums)
        std::cout << num << " ";

    std::cout << std::endl << std::endl;
}


void test5(){
    std::cout << "===================== TEST_5 =====================" << std::endl;
    Person p1{"Tony", 28};
    Person p2{"Peter", 27};
    Person p3{"Kyle", 23};

    std::vector<Person> ppl{p1, p2, p3};

    std::sort(ppl.begin(), ppl.end(), [] (Person lhs, Person rhs) {

        return lhs.get_name() < rhs.get_name();

    });

    for(Person p: ppl)
        std::cout << p << " ";

    std::cout << std::endl;

    std::sort(ppl.begin(), ppl.end(), [] (Person lhs, Person rhs) {

        return lhs.get_age() < rhs.get_age();

    });

    for(Person p: ppl)
        std::cout << p << " ";

    std::cout << std::endl;
}

int main(){

    test1();
    test2();
    test3();
    test4();
    test5();

    return 0;
}
