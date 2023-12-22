#include <iostream>
#include <string>

template <typename T, int N>
class Array {
    int size{ N };
    T values[ N ];

    friend std::ostream& operator<<(std::ostream &os, const Array<T, N> &rhs) {
        os << "[";
        for (const auto &val: rhs.values) {
            os << val << " ";
        }
        os << "]" << std::endl;
        return os;
    }

public: 
    Array() = default;
    Array(T init_val) {
        for (auto &item:values) {
            item = init_val;
        }
    }
    void fill(T val) {
        for (auto &item: values) {
            item = val;
        }
    }
    int get_size() const {
        return size;
    }

    T& operator[](int index) {
        return values[index];
    }
};


int main()
{
    Array<int, 5> nums;
    std::cout << "The size of nums is " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(0);
    std::cout << "The size of nums is " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(35);
    std::cout << "The size of nums is " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;


    nums[0] = 1000;
    nums[4] = 200;
    std::cout << "The size of nums is " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    // Create an array object created from Array class that used Array template
    Array<int, 100> nums2{ 1 };
    std::cout << "The size of nums2 is " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings{ std::string{"Tom"} };
    std::cout << "The size of strings is " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;

    strings.fill(std::string{"O"});

    strings[0] = std::string{ "JimBob" };

    std::cout << "The size of strings is " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;


    return 0;
}

