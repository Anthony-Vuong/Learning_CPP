#include <iostream>
#include <list>
#include <iterator>
#include <string>

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
    os << rhs.name << " " << rhs.age;
    return os;
}

template<typename T>
void display(const std::list<T>& lst) {
    std::cout << "[";
    for (const auto& element : lst) {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "===================== TEST_1 =====================" << std::endl;


    std::list<int> lst1{ 1, 2, 3, 4, 5 };
    display(lst1);

    std::list<std::string> lst2;
    lst2.push_back("Back");
    lst2.push_front("Front");
    display(lst2);


    std::list<int> lst3;
    lst3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(lst3);

    std::list<int> lst4(10, 5);
    display(lst4);

    std::cout << std::endl;


}

void test2() {
    std::cout << "===================== TEST_2 =====================" << std::endl;



    std::list<int> lst1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    display(lst1);

    std::cout << "Front: " << lst1.front() << std::endl;
    std::cout << "Back: " << lst1.back() << std::endl;
    std::cout << "Size: " << lst1.size() << std::endl;

    lst1.clear();
    display(lst1);
    std::cout << "Size after clear: " << lst1.size() << std::endl;

    std::cout << std::endl;

}

void test3() {
    std::cout << "===================== TEST_3 =====================" << std::endl;

    std::list<int> lst1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    display(lst1);

    std::cout << "Front: " << lst1.front() << std::endl;
    std::cout << "Back: " << lst1.back() << std::endl;
    std::cout << "Size: " << lst1.size() << std::endl;


    lst1.resize(5);
    display(lst1);
    std::cout << "Front: " << lst1.front() << std::endl;
    std::cout << "Back: " << lst1.back() << std::endl;
    std::cout << "Size: " << lst1.size() << std::endl;

    lst1.resize(10);
    display(lst1);
    std::cout << "Front: " << lst1.front() << std::endl;
    std::cout << "Back: " << lst1.back() << std::endl;
    std::cout << "Size: " << lst1.size() << std::endl;
   

    std::list<Person> ppl;
    ppl.resize(5);
    std::cout << "People: ";
    display(ppl);
 

    std::cout << std::endl;

}

void test4() {
    std::cout << "===================== TEST_4 =====================" << std::endl;

    std::list<int> lst1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    display(lst1);

    auto it = std::find(lst1.begin(), lst1.end(), 5);

    if (it != lst1.end()) {
        lst1.insert(it, 3000);
    }

    display(lst1);

    std::list<int> lst2{ 100, 200, 300 };
    lst1.insert(it, lst2.begin(), lst2.end());

    display(lst1);

    std::advance(it, -4);
    std::cout << "It: " << *it << std::endl;


    lst1.erase(it);

    display(lst1);

    std::cout << std::endl;

}

void test5() {
    std::cout << "===================== TEST_5 =====================" << std::endl;

    std::list<Person> boys{ 
        {"Tony", 28},
        {"Peter", 27},
        {"Kyle", 23}
    };

    display(boys);

    int age;
    std::string name;

    std::cout << "Entern name of another person: ";
    std::cin >> name;

    std::cout << "Enter their age: ";
    std::cin >> age;

    boys.emplace_back(Person{name, age});
    display(boys);

    auto it = std::find(boys.begin(), boys.end(), Person{"Peter", 27});
    if (it != boys.end()) {
        boys.emplace(it, Person{"Daniel", 29});
    }

    display(boys);

}



int main()
{

    test1();

    test2();

    test3();

    test4();

    test5();

	return 0;
}

