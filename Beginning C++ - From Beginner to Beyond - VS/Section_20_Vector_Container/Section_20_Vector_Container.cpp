#include <iostream>
#include <vector>
#include <algorithm>

class Person {

    friend std::ostream& operator<<(std::ostream &os, const Person &rhs);
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


void display(const std::vector<int> &vec) {
    std::cout << "[";
    std::for_each(vec.begin(), vec.end(), [](int x) {std::cout << x << " "; });
    std::cout << "]" << std::endl;
}

template<typename T>
void display_alt(const std::vector<T>& vec) {
    std::cout << "[";
    for (const auto &element: vec) {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "============================== TEST_1 ==============================" << std::endl;
    std::vector<int> vec{1, 2, 3, 4, 5};

    display_alt(vec);

    vec = {2, 3, 4, 5, 6};

    display(vec);

    std::vector<int> vec1(100, 5);
    display(vec1);

}
void test2() {
    std::cout << "============================== TEST_2 ==============================" << std::endl;
    std::vector<int> vec{ 1, 2, 3, 4, 5 };

    display_alt(vec);

    std::cout << "\nVec size: " << vec.size() << std::endl;
    std::cout << "Vec max size: " << vec.max_size() << std::endl;
    std::cout << "Vec capacity: " << vec.capacity() << std::endl;
    display_alt(vec);

    vec.push_back(6);
    std::cout << "\nVec size: " << vec.size() << std::endl;
    std::cout << "Vec max size: " << vec.max_size() << std::endl;
    std::cout << "Vec capacity: " << vec.capacity() << std::endl;
    display_alt(vec);

    vec.shrink_to_fit();
    std::cout << "\nVec size: " << vec.size() << std::endl;
    std::cout << "Vec max size: " << vec.max_size() << std::endl;
    std::cout << "Vec capacity: " << vec.capacity() << std::endl;
    display_alt(vec);
    
    vec.reserve(100);
    std::cout << "\nVec size: " << vec.size() << std::endl;
    std::cout << "Vec max size: " << vec.max_size() << std::endl;
    std::cout << "Vec capacity: " << vec.capacity() << std::endl;
    display_alt(vec);


}
void test3() {
    std::cout << "============================== TEST_3 ==============================" << std::endl;
    std::vector<int> vec{ 1, 2, 3, 4, 5 };

    display_alt(vec);

    vec[0] = 12345;
    vec.at(1) = 98765;

    display_alt(vec);

}
void test4() {
    std::cout << "============================== TEST_4 ==============================" << std::endl;
    std::vector<Person> stooges;

    Person p1{"larry", 26};
    display_alt(stooges);

    stooges.push_back(p1);
    display_alt(stooges);

    stooges.push_back(Person{"moe", 25});
    display_alt(stooges);

    stooges.emplace_back("curly", 27 );
    display_alt(stooges);

}
void test5() {
    std::cout << "============================== TEST_5 ==============================" << std::endl;

    std::vector<Person> stooges{

        {"Moe", 25},
        {"Larry", 26},
        {"Curly", 32}

    };

    display_alt(stooges);

    std::cout << "Stooges front: " << stooges.front() << std::endl;
    std::cout << "Stooges back: " << stooges.back() << std::endl;

    stooges.pop_back();
    display_alt(stooges);

}
void test6() {
    std::cout << "============================== TEST_6 ==============================" << std::endl;
    std::vector<int> vec{ 1, 2, 3, 4, 5 };

    display(vec);

    vec.clear();
    display(vec);

    vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vec.erase(vec.begin(), vec.begin()+4);
    display(vec);

    /*
    vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto it = vec.begin();
    while (it != vec.end()) {
        if (*it % 2 == 0) {
            vec.erase(it);
        }
        else {
            it++;
        }
    }
    display(vec);
    */
}
void test7() {
    std::cout << "============================== TEST_7 ==============================" << std::endl;
    std::vector<int> vec1{ 1, 2, 3, 4, 5 };
    std::vector<int> vec2{ 9, 8, 7, 6, 5 };

    display(vec1);
    display(vec2);
    std::cout << std::endl;

    vec1.swap(vec2);

    display(vec1);
    display(vec2);

}

void test8() {
    std::cout << "============================== TEST_8 ==============================" << std::endl;
    std::vector<int> vec1{ -21, 62, 13, 24, -56 };

    display(vec1);

    std::sort(vec1.begin(), vec1.end());

    display(vec1);


}

void test9() {
    std::cout << "============================== TEST_9 ==============================" << std::endl;
    std::vector<int> vec1{ -21, 62, 13, 24, -56 };
    std::vector<int> vec2{ 1, 2, 3 };

    display(vec1);
    display(vec2);
    std::cout << std::endl;

    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));

    display(vec1);
    display(vec2);
    std::cout << std::endl;

    vec1 = { -21, 62, 13, 24, -56 };
    vec2 = { 1, 2, 3 };

    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2), [](int x) {return x % 2 == 0; });
    display(vec1);
    display(vec2);
    std::cout << std::endl;


}
void test10() {
    std::cout << "============================== TEST_10 ==============================" << std::endl;

    std::vector<int> vec2{ 2, 4, 6, 8, 10 };
    std::vector<int> vec1{ 1, 2, 3, 4, 5 };
    std::vector<int> vec3;

    std::transform(vec1.begin(), vec1.end(), vec2.begin(), std::back_inserter(vec3), [](int x, int y) {return x * y; });
    display(vec1);
    display(vec2);
    display(vec3);
    std::cout << std::endl;

}
void test11() {
    std::cout << "============================== TEST_11 ==============================" << std::endl;
    std::vector<int> vec1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::vector<int> vec2{ 100, 200, 300, 400 };

    display(vec1);
    display(vec2);
    std::cout << std::endl;

    auto it = std::find(vec1.begin(), vec1.end(), 5);
    if (it != vec1.end()) {
        std::cout << "Inserting..." << std::endl;
        vec1.insert(it, vec2.begin(), vec2.end());
    }
    else {
        std::cout << "NOT FOUND" << std::endl;
    }

    display(vec1);
    display(vec2);
    std::cout << std::endl;


}

int main()
{
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
    test11();
 
    
    return 0;
}

