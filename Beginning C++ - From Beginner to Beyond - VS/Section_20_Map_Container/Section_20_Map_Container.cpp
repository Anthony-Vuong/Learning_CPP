#include <iostream>
#include <set>
#include <map>

void display(const std::map<std::string, std::set<int>> &m) {
    std::cout << "[ ";
    for (const auto& element : m) {
        std::cout << "[ ";
        for (const auto& set_element : element.second) {
            std::cout << set_element << " ";
        }
        std::cout << "]";

    }
    std::cout << "]" << std::endl;
}

template<typename T1, typename T2>
void display_alt(const std::map<T1, T2>& m) {
    std::cout << "[";
    for (const auto& element : m) {
        std::cout << element.first << " " << element.second << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "======================== TEST_1 ========================" << std::endl;
    std::map<std::string, int> m{
        {"Tony", 28},
        {"Peter", 27},
        {"Kyle", 23}
    };

    display_alt(m);

    m.insert(std::pair<std::string, int>("Daniel", 29));
    display_alt(m);

    m.insert(std::make_pair("Andrea", 7));
    display_alt(m);

    m["Peter"] = 28;
    display_alt(m);

    m["Andrea"] += 10;
    display_alt(m);

    m.erase("Tony");
    display_alt(m);

    std::cout << "Count for Kyle: " << m.count("Kyle") << std::endl;
    std::cout << "Count for Daniel: " << m.count("Daniel") << std::endl;

    m.insert(std::make_pair("Allison", 4));
    display_alt(m);

    auto it = m.find("Allison");
    if (it != m.end()) {
        std::cout << "Allison found." << std::endl;
    }
    else {
        std::cout << "Not found" << std::endl;
    }

    m.clear();
    display_alt(m);

}

void test2() {
    std::cout << "\n\n======================== TEST_2 ========================" << std::endl;

    std::map<std::string, std::set<int>> grades{

        {"Hunter", {100, 95}},
        {"Hudson", {90}},
        {"Audrey", {80, 105}}


    };

    display(grades);

    grades["Hudson"].insert(95);
    display(grades);

    auto it = grades.find("Audrey");
    if (it != grades.end()) {
        it->second.insert(125);
    }

    display(grades);

    auto it1 = grades.find("Billy Bob");
    if (it1 != grades.end()) {
        it1->second.insert(155);
    }
    else {
        std::cout << "Billy Bob not in grade book" << std::endl;
    }

    display(grades);


}


int main()
{
    test1();

    test2();
    

    return 0;
}

