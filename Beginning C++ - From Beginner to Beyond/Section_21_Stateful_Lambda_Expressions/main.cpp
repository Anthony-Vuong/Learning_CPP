#include <iostream>
#include <vector>
#include <algorithm>

int global_x{999};


void test1(){
    std::cout << "================= TEST_1 =================" << std::endl;
    int local_x{111};

    auto l = [local_x] () {

        std::cout << local_x << std::endl;
        std::cout << global_x << std::endl;

    };

    l();

}

void test2(){
    std::cout << "\n================= TEST_2 =================" << std::endl;
    
    int x{5};

    auto l = [x] () mutable {
        x += 5;
        std::cout << x << std::endl;
    };

    for(int i{0}; i<2; i++){
        l();
    }
}


void test3(){
    std::cout << "\n================= TEST_3 =================" << std::endl;

    int x{5};

    auto l = [&x] () mutable {
        x += 5;
        std::cout << x << std::endl;
    };

    for(int i{0}; i<5; i++){
        l();
    }
}


void test4(){
    std::cout << "\n================= TEST_4 =================" << std::endl;

    int x{2};
    int y{4};
    int z{6};

    // = - copy 
    auto l = [=] () mutable {
        x += 2;
        y += 4;
        std::cout << x << std::endl;
        std::cout << y << std::endl;

    };

    int i{0};
    while(i < 3){
        l();
        i++;
    }

    std::cout << "\n" << x << std::endl;
    std::cout << y << std::endl;
}


void test5(){
    std::cout << "\n================= TEST_5 =================" << std::endl;

    int x{3};
    int y{5};
    int z{7};

    // & - reference
    auto l = [&] () mutable {
        x += 2;
        y += 4;
        z += 6;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;

    };

    int i{0};
    while(i < 3){
        l();
        i++;
    }

    std::cout << "\n" << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    
}


void test6(){
    std::cout << "\n================= TEST_5 =================" << std::endl;

    int x{2};
    int y{4};
    int z{6};

    // & - reference
    auto l = [=, &y] () mutable {
        x += 2;
        y += 4;
        z += 6;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;

    };

    int i{0};
    while(i < 3){
        l();
        i++;
    }

    std::cout << "\n" << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    
}

int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}
