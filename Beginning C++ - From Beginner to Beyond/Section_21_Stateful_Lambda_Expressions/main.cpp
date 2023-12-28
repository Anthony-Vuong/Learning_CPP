#include <iostream>
#include <vector>
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

    auto change_person1() {return [this] (std::string new_name, int new_age){name = new_name; age = new_age;};}
    auto change_person2() {return [=] (std::string new_name, int new_age){name = new_name; age = new_age;};}
    auto change_person3() {return [&] (std::string new_name, int new_age){name = new_name; age = new_age;};}

};

std::ostream& operator<<(std::ostream& os, const Person& rhs) {
    os << rhs.name << " " << rhs.age;
    return os;
}

int global_x{999};


void test1(){
    std::cout << "================= TEST_1 =================" << std::endl;
    int local_x{111};

    auto l = [local_x] () {

        std::cout << local_x << std::endl;
        std::cout << global_x << std::endl;

    };

    l();

}

void test2(){
    std::cout << "\n================= TEST_2 =================" << std::endl;
    
    int x{5};

    auto l = [x] () mutable {
        x += 5;
        std::cout << x << std::endl;
    };

    for(int i{0}; i<2; i++){
        l();
    }
}


void test3(){
    std::cout << "\n================= TEST_3 =================" << std::endl;

    int x{5};

    auto l = [&x] () mutable {
        x += 5;
        std::cout << x << std::endl;
    };

    for(int i{0}; i<5; i++){
        l();
    }
}


void test4(){
    std::cout << "\n================= TEST_4 =================" << std::endl;

    int x{2};
    int y{4};
    int z{6};

    // = - copy 
    auto l = [=] () mutable {
        x += 2;
        y += 4;
        std::cout << x << std::endl;
        std::cout << y << std::endl;

    };

    int i{0};
    while(i < 3){
        l();
        i++;
    }

    std::cout << "\n" << x << std::endl;
    std::cout << y << std::endl;
}


void test5(){
    std::cout << "\n================= TEST_5 =================" << std::endl;

    int x{3};
    int y{5};
    int z{7};

    // & - reference
    auto l = [&] () mutable {
        x += 2;
        y += 4;
        z += 6;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;

    };

    int i{0};
    while(i < 3){
        l();
        i++;
    }

    std::cout << "\n" << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    
}


void test6(){
    std::cout << "\n================= TEST_6 =================" << std::endl;

    int x{2};
    int y{4};
    int z{6};

    // & - reference
    auto l = [=, &y] () mutable {
        x += 2;
        y += 4;
        z += 6;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;

    };

    int i{0};
    while(i < 3){
        l();
        i++;
    }

    std::cout << "\n" << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    
}


void test7(){
    std::cout << "\n================= TEST_7 =================" << std::endl;
    
    int x{2};
    int y{4};
    int z{6};

    // & - reference
    auto l = [&, x, z] () mutable {
        x += 2;
        y += 4;
        z += 6;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;

    };

    int i{0};
    while(i < 3){
        l();
        i++;
    }

    std::cout << "\n" << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

}

void test8(){
    std::cout << "\n================= TEST_8 =================" << std::endl;

    Person p1{"Larry", 21};
    std::cout << p1 << std::endl;

    auto change_person1 = p1.change_person1();
    change_person1("Moe", 25);
    std::cout << p1 << std::endl;

    auto change_person2 = p1.change_person2();
    change_person2("Curly", 30);
    std::cout << p1 << std::endl;

    auto change_person3 = p1.change_person3();
    change_person3("Tony", 28);
    std::cout << p1 << std::endl;

}

class Lambda{

private:
    int y;
public:
    Lambda(int y) : y{y} {};

    void operator() (int x) const {

        std::cout << x + y << std::endl;
    };

};


void test9(){
    std::cout << "\n================= TEST_9 =================" << std::endl;
    int y{100};

    Lambda l1(y);
    auto l2 = [y] (int x) {std::cout << x + y << std::endl;};

    l1(222);
    l2(500);
}

class People{

private:
    std::vector<Person> people;
    int max_people;
public:
    People(int max = 10): max_people{max}{}
    People(const People &p) = default;
    void add(std::string name, int age){
        people.emplace_back(name, age);
    }
    void set_max_people(int max){
        max_people = max;
    }
    int get_max_people(){
        return max_people;
    }


    std::vector<Person> get_people(int max_age){

        std::vector<Person> result;
        int count{0};

        std::copy_if(people.begin(), people.end(), std::back_inserter(result), [this, &count, max_age](const Person &p){return p.get_age() > max_age && ++count<=max_people;});

        return result;
    }

};

void test10(){

    std::cout << "\n================= TEST_10 =================" << std::endl;
    People fam;
    fam.add("Tony", 28);
    fam.add("Peter", 27);
    fam.add("Kyle", 23);
    fam.add("Crystal", 23);
    fam.add("Daniel", 29);

    auto result = fam.get_people(10);

    std::cout << std::endl;

    for(const auto &p: result)
        std::cout << p << std::endl;

    fam.set_max_people(3);

    result = fam.get_people(3);

    std::cout << std::endl;

    for(const auto &p: result)
        std::cout << p << std::endl;


}


int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    return 0;
}
