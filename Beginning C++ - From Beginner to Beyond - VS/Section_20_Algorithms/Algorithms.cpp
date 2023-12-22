#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <cctype>

class Person {
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

// Method that finds element/class object in container using std::find
void found_test() {
    std::cout << "\n======================== FIND TEST ========================" << std::endl;

    std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 , 10 };
    
    auto loc = std::find(std::begin(vec), std::end(vec), 7);

    if (loc != std::end(vec)) {
        std::cout << "Found: " << *loc << std::endl;
    }

    std::list<Person> ppl{
        {"Tony", 27},
        {"Peter", 26},
        {"Kyle", 23}
    };

    auto loc1 = std::find(ppl.begin(), ppl.end(), Person{"Peter", 26});

    if (loc1 != ppl.end()) {
        std::cout << "Found person "  << std::endl;
    }

}

// Counts the elements in the container
void count_test() {
    std::cout << "\n======================== COUNT TEST ========================" << std::endl;

    std::vector<int> vec{ 1, 2, 3, 4, 2, 2, 5, 6, 7, 8, 9 , 10, 2 };

    int num = std::count(vec.begin(), vec.end(), 2);
    std::cout << "2 was found: " << num << " times." << std::endl;
}

// Counts the elements in the container - using LAMBDA
void count_if_test() {
    std::cout << "\n======================== COUNT IF TEST ========================" << std::endl;

    std::vector<int> vec{ 1, 2, 3, 4, 2, 2, 5, 6, 7, 8, 9 , 10, 2 };

    // Looking for odd numbers
    int num = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 != 0; });
    std::cout << "Odd #s were found: " << num << " times." << std::endl;

    // Looking for even numbers
    num = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0; });
    std::cout << "Even #s were found: " << num << " times." << std::endl;

    // Looking for numbers >= 5
    num = std::count_if(vec.begin(), vec.end(), [](int x) {return x >= 5; });
    std::cout << "#s greater or equal to 5 were found: " << num << " times." << std::endl;
}

// Replaces the elements matching found element with another speicified element in the container
void replace_test() {
    std::cout << "\n======================== REPLACE TEST ========================" << std::endl;

    std::vector<int> vec{ 1, 2, 3, 4, 2, 2, 5, 6, 7, 8, 9 , 10, 2 };
    for (auto num : vec)
        std::cout << num << " ";

    std::cout << "\n\n" << std::endl;


    std::replace(vec.begin(), vec.end(), 2, 0);
    for (auto num : vec)
        std::cout << num << " ";

    std::cout << "\n\n" << std::endl;
}

// Returns a true if all elements match the conditional operators: > and <
void all_of_test() {
    std::cout << "\n======================== All Of TEST ========================" << std::endl;

    std::vector<int> vec{ 1, 2, 3, 4, 2, 2, 5, 6, 7, 8, 9 , 10, 2 };
    
    if (std::all_of(vec.begin(), vec.end(), [](int x) {return x < 5; })) {
        std::cout << "All nums less than 10" << std::endl;
    }
    else {
        std::cout << "All nums are not less than 10" << std::endl;
    }

    if (std::all_of(vec.begin(), vec.end(), [](int x) {return x > -5; })) {
        std::cout << "All nums more than -5" << std::endl;
    }
    else {
        std::cout << "All nums are not more than -5" << std::endl;
    }
}

// Changes the string to specified condition/value
void string_transform_test() {
    std::cout << "\n======================== String Transform Test ========================" << std::endl;
    std::string test{"Try this out!"};

    std::cout << "Before: " << test << std::endl;
    std::transform(test.begin(), test.end(), test.begin(), ::toupper);
    std::cout << "After: " << test << std::endl;



}

int main()
{
    found_test();

    count_test();

    count_if_test();

    replace_test();

    all_of_test();

    string_transform_test();
    

    return 0;
}

