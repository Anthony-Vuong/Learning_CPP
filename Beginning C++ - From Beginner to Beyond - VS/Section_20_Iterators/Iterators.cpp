#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

// Range-based for loop to display elements
void display(const std::vector<int> &vec) {
    std::cout << "[";
    for (auto const &i:vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

// Using auto keyword to generate iterator
void test1() {
    std::cout << "\n================== TEST 1 ====================" << std::endl;
    std::vector<int> vec{ 1, 2, 3, 4, 5 };
    auto it = vec.begin();
    std::cout << "Element: " << *it << std::endl;
    it++;
    std::cout << "Next Element: " << *it << std::endl;
    it += 2;
    std::cout << "Next Element: " << *it << std::endl;
    it -= 2;
    std::cout << "Next Element: " << *it << std::endl;
    it = vec.end() - 1;
    std::cout << "Next Element: " << *it << std::endl;

}

// Explicitly instantiating iterator
void test2() {
    std::cout << "\n================== TEST 2 ====================" << std::endl;
    std::vector<int> vec{ 1, 2, 3, 4, 5 };
    std::vector<int>::iterator it = vec.begin();

    while (it != vec.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    it = vec.begin();
    while (it != vec.end()) {
        *it = 0;
        it++;
    }

    display(vec);

}

// Explicitly instantiating CONST iterator
void test3() {
    std::cout << "\n================== TEST 3 ====================" << std::endl;
    std::vector<int> vec{ 1, 2, 3, 4, 5 };
    std::vector<int>::const_iterator it = vec.begin();

    while (it != vec.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    it = vec.begin();
    while (it != vec.end()) {
        // *it = 0; // compiler error since const means element can't be changed
        it++;
    }

    display(vec);

}

// Explicitly instantiating reverse iterator
void test4() {
    std::cout << "\n================== TEST 4 ====================" << std::endl;
    std::vector<int> vec{ 1, 2, 3, 4, 5 };
    //rbegin = reverse begin()
    auto it = vec.rbegin();

    // Rend = reverse end()
    while (it != vec.rend()) {
        std::cout << *it << std::endl;
        it++;
    }

    // Doubly linked list implementation
    std::list<std::string> name{"Tony", "Peter", "Kyle"};
    auto it1 = name.crbegin();
    std::cout << *it1 << std::endl;
    it1++;
    std::cout << *it1 << std::endl;

    std::map<std::string, std::string> favorites{
        {"Tony", "Chocolate"},
        {"Peter", "Vanilla"},
        {"Kyle", "Strawberry"}
    };

    auto it2 = favorites.begin();
    while (it2 != favorites.end()) {
        std::cout << it2->first << " " << it2->second << std::endl;
        it2++;
    }

}

// Test iterating over a subset of container
void test5() {
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = vec.begin() + 3;
    auto finish = vec.end() - 4;

    while (start != finish) {
        std::cout << *start << std::endl;
        start++;
    }

}


int main()
{
    // Run the above tests
    test1();

    test2();

    test3();
    
    test4();

    test5();

    return 0;
}

