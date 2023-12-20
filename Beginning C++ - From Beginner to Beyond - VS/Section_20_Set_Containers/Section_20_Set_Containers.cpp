#include <set>
#include <iostream>

class Person {

    friend std::ostream& operator<<(std::ostream& os, const Person& rhs);
    std::string name;
    int age;

public:
    Person() = default;
    Person(std::string name, int age)
        :name{ name }, age{ age } {
    }
    bool operator<(const Person& per) const {
        return this->age < per.age;
    }
    bool operator==(const Person& per)const {
        return (this->name == per.name && this->age == per.age);
    }

};

std::ostream& operator<<(std::ostream& os, const Person& rhs) {
    os << rhs.name << ", " << rhs.age;
    return os;
}

template<typename T>
void display(const std::set<T>& vec) {
    std::cout << "[";
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "======================== TEST_1 ========================" << std::endl;
    std::set<int> s1{ 1, 2, 3, 4, 5 };
    display(s1);

    s1 = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    display(s1);

    s1.insert(99);
    s1.insert(-1);
    display(s1);

    if (s1.count(99)) {
        std::cout << "Found 99!" << std::endl;
    }
    else {
        std::cout << "99 Not Found!" << std::endl;
    }

    auto it = s1.find(-1);
    if (it != s1.end()) {
        std::cout << "Found " << *it << std::endl;
    }

    s1.clear();
    display(s1);


}

void test2() {
    std::cout << "======================== TEST_2 ========================" << std::endl;
    std::set<Person> stooges{

        Person{"Larry", 25},
        Person{"Moe", 24},
        Person{"Curly", 30}

    };

    display(stooges);

    stooges.emplace("Tony", 28);
    display(stooges);

    stooges.emplace("Peter", 28);  // This will not work - duplicates, in this case, age cannot be added
    display(stooges);

    stooges.emplace("Peter", 27);  
    display(stooges);

    auto it = stooges.find(Person{ "Peter", 27 });
    if (it != stooges.end()) {
        std::cout << "Peter was found." << std::endl;
    }

    auto it1 = stooges.find(Person{ "Barney", 999999 });
    if (it1 == stooges.end()) {
        std::cout << "Barney was not found." << std::endl;
    }
    else {
        stooges.erase(it1);
    }
    display(stooges);

    stooges.emplace("Barney", 9999999);
    display(stooges);

    auto it2 = stooges.find(Person{ "Barney", 9999999 });
    if (it2 == stooges.end()) {
        std::cout << "Barney was not found." << std::endl;
    }
    else {
        stooges.erase(it2);
    }
    display(stooges);

}

void test3(){
    std::cout << "======================== TEST_3 ========================" << std::endl;
    std::set<std::string> abcs{"A", "B", "C"};
    display(abcs);

    auto result = abcs.insert("D");
    display(abcs);

    std::cout << std::boolalpha;
    std::cout << "First: " << *result.first << std::endl;
    std::cout << "Second: " << result.second << std::endl;

    result = abcs.insert("A");
    std::cout << std::boolalpha;
    std::cout << "First: " << *result.first << std::endl;
    std::cout << "Second: " << result.second << std::endl;

}

int main()
{
    test1();
    test2();
    test3();

    return 0;
}

