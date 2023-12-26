#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct Square_Functor{
    void operator() (int x){
        std::cout << x *x << " " << std::endl;
    }
};

template<typename T>
struct Displayer{
    void operator() (const T &data){
        std::cout << data << " " << std::endl;
    }
};

class Multiplier{

private:
        int num{};

public:
        Multiplier(int n): num{n}{}
        int operator() (int n) const {
            return n * num;
        }
};

int main(){
    std::cout << "======================= TEST_1 ======================" << std::endl;
    Square_Functor square;
    square(4);

    Displayer<int> d1;
    Displayer<std::string> d2;
    d1(100);
    d2("Frank");


    std::cout << "======================= TEST_2 ======================" << std::endl;
    std::vector<int> nums{1, 2, 3, 4, 5};
    std::vector<std::string> stooges{"Larry", "Moe", "Curly"};

    std::for_each(nums.begin(), nums.end(), square);
    std::cout << std::endl;

    std::for_each(nums.begin(), nums.end(), Displayer<int>());
    std::cout << std::endl;

    std::for_each(nums.begin(), nums.end(), d1);
    std::cout << std::endl;

    std::for_each(stooges.begin(), stooges.end(), d2);
    std::cout << std::endl;

    std::for_each(stooges.begin(), stooges.end(), Displayer<std::string>());
    std::cout << std::endl;

    
    std::cout << "======================= TEST_3 ======================" << std::endl;
    std::for_each(nums.begin(), nums.end(), [](int x) {std::cout << x * x << " ";});
    std::cout << std::endl;

    std::for_each(nums.begin(), nums.end(), [](int x) {std::cout << x * 10 << " ";});
    std::cout << std::endl;

    std::for_each(stooges.begin(), stooges.end(), [](std::string s){std::cout << s << " ";});
    std::cout << std::endl;


    std::cout << "======================= TEST_4 ======================" << std::endl;
    Multiplier m(100);
    nums = {1, 2, 3, 4, 5};

    std::transform(nums.begin(), nums.end(), nums.begin(),  m);
    std::for_each(nums.begin(), nums.end(), d1);
    std::cout << std::endl;

    nums = {1, 2, 3, 4, 5};
    std::transform(nums.begin(), nums.end(), nums.begin(),  [](int x){return x*100;});
    std::for_each(nums.begin(), nums.end(), [](int x){std::cout << x << std::endl;});

    return 0;
}
