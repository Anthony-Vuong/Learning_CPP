#include <iostream>
#include <string>

template<typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

template<typename T1, typename T2>
void func(T1 a, T2 b) {
    std::cout << a << " " << b << std::endl;
}

struct Person {
    std::string name;
    int age;
    bool operator < (const Person& rhs) const {
        return this->age < rhs.age;
    }

};

std::ostream& operator<<(std::ostream& os, const Person& rhs) {
    os << rhs.name;
    return os;
}

template<typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    std::cout << "======================== PART 1 ========================" << std::endl;
    int x{ 100 }, y{ 200 };
    std::cout << "Before\n\tX: " << x << " " << "Y: " << y << std::endl;
    mySwap(x, y);
    std::cout << "After\n\tX: " << x << " " << "Y: " << y << std::endl;

    std::cout << "\n======================== PART 2 ========================" << std::endl;
    Person p1{"Curly", 25};
    Person p2{ "Moe", 30 };
    Person p3 = min(p1, p2);

    std::cout << p3.name << " is younger." << std::endl;

    func(p1, p2);

    std::cout << "\n======================== PART 3 ========================" << std::endl;
    std::cout << min<int>(2, 3) << std::endl;
    std::cout << min(2, 3) << std::endl;
    std::cout << min('A', 'B') << std::endl;
    std::cout << min(12.5, 9.2) << std::endl;
    std::cout << min<int>(5+2*2, 7+40) << std::endl;

    std::cout << "\n======================== PART 4 ========================" << std::endl;
    func<int>(10, 20);
    func(10, 20);
    func<char, double>('a', 20.0);
    func(1000, "Testing");
    func(2000, std::string{"JimBob"});
    return 0;
}


