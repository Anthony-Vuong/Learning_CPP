#include <iostream>
#include <array>
#include <iomanip>
#include <algorithm>
#include <numeric>

void display_array(const std::array<int, 5> &arr1) {
    std::cout <<"[ ";

    for (auto num : arr1)
        std::cout << num << " ";

    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "============================= TEST_1 =============================" << std::endl;

    std::array<int, 5> arr1{1, 2, 3, 4, 5};
    std::array<int, 5> arr2;

    display_array(arr1);
    display_array(arr2);

    arr2 = {10, 20, 30, 40, 50};

    display_array(arr1);
    display_array(arr2);

    std::cout << "Size of arr1 is: " << arr1.size() << std::endl;
    std::cout << "Size of arr2 is: " << arr2.size() << std::endl;

    arr1[0] = 10000;
    arr1.at(1) = -30000;

    display_array(arr1);
 
    std::cout << "Front of arr2 is: " << arr2.front() << std::endl;
    std::cout << "Back of arr2 is: " << arr2.back() << std::endl;


}

void test2() {
    std::cout << "============================= TEST_2 =============================" << std::endl;

    std::array<int, 5> arr1{ 1, 2, 3, 4, 5 };
    std::array<int, 5> arr2{10, 20, 30, 40, 50};

    display_array(arr1);
    display_array(arr2);

    arr1.fill(0);

    display_array(arr1);
    display_array(arr2);

    arr1.swap(arr2);

    display_array(arr1);
    display_array(arr2);
}

void test3() {
    std::cout << "============================= TEST_3 =============================" << std::endl;

    std::array<int, 5> arr1{ 1, 2, 3, 4, 5 };

    display_array(arr1);
    
    
    int* ptr = arr1.data();
    std::cout << std::showbase << std::hex << ptr << std::endl; // Possibly doesnt work for pointers
    std::cout << std::resetiosflags(std::ios::hex);
    std::cout << std::resetiosflags(std::ios::showbase);

    *ptr = 12345;
    display_array(arr1);

}

void test4() {
    std::cout << "============================= TEST_4 =============================" << std::endl;
    std::array<int, 5> arr1{ 3, 2, 1, 5, 4 };

    display_array(arr1);

    std::sort(arr1.begin(), arr1.end());

    display_array(arr1);

}

void test5() {
    std::cout << "============================= TEST_5 =============================" << std::endl;
    std::array<int, 5> arr1{ 3, 2, 1, 5, 4 };

    std::array<int, 5>::iterator min_num = std::min_element(arr1.begin(), arr1.end());
    auto max_num = std::max_element(arr1.begin(), arr1.end());

    std::cout << "Max: " << *max_num << " Min_num: " << *min_num << std::endl;

}

void test6() {
    std::cout << "============================= TEST_6 =============================" << std::endl;
    std::array<int, 7> arr1{ 3, 2, 1, 5, 7, 7, 5 };

    auto adjacent = std::adjacent_find(arr1.begin(), arr1.end());
    if (adjacent != arr1.end()) {
        std::cout << "Adjacent found at: " << *adjacent << std::endl;
    }
    else {
        std::cout << "Not found " << std::endl;

    }
}

void test7() {
    std::cout << "============================= TEST_7 =============================" << std::endl;
    std::array<int, 5> arr1{ 3, 2, 1, 5, 4 };

    int sum = std::accumulate(arr1.begin(), arr1.end(), 0);
    std::cout << "Sum is " << sum << std::endl;

}

void test8() {
    std::cout << "============================= TEST_8 =============================" << std::endl;
    std::array<int, 8> arr1{ 3, 2, 1, 5, 4, 2, 4, 2 };

    int count = std::count(arr1.begin(), arr1.end(), 2);
    std::cout << "The num 2 was found " << count << " times." << std::endl;

}

void test9() {
    std::cout << "============================= TEST_9 =============================" << std::endl;
    std::array<int, 12> arr1{ 15, 3, 2, 1, 5, 4, 2, 4, 2, 9, 10, 3 };

    int count = std::count_if(arr1.begin(), arr1.end(), [](int x) {return x < 15 && x>4; });
    std::cout << "A match was found " << count << " times." << std::endl;


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
    //test9();


    return 0;
}

