#include <iostream>
#include <deque>

template<typename T>
void display(const std::deque<T>& deq) {
    std::cout << "[ ";
    for (const auto& element : deq) {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "================================ TEST_1 ================================" << std::endl;
    std::deque<int> deq1{1, 2, 3, 4, 5};
    display(deq1);

    deq1 = {11, 12, 13, 14};
    display(deq1);

    deq1[0] = 987;          // not often done with deque
    deq1.at(1) = 1111;      // not often done with deque
    display(deq1);

}

void test2() {
    std::cout << "================================ TEST_2 ================================" << std::endl;
    std::deque<int> deq1{0, 0, 0, 0};

    display(deq1);

    deq1.push_back(99);
    deq1.push_back(42);
    display(deq1);

    deq1.push_front(61);
    deq1.push_front(33);
    display(deq1);

    std::cout << "Front: " << deq1.front() << std::endl;
    std::cout << "Back: " << deq1.back() << std::endl;
    std::cout << "Size: " << deq1.size() << std::endl;

    deq1.pop_back();
    deq1.pop_front();
    display(deq1);
}

void test3() {
    std::cout << "================================ TEST_3 ================================" << std::endl;
    std::deque<int> deq1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::deque<int> odd_even_deque;

    for (const auto &element: deq1) {
        if (element % 2 == 0) {
            odd_even_deque.push_back(element);
        }
        else {
            odd_even_deque.push_front(element);

        }
    }

    display(odd_even_deque);

}

void test4() {
    std::cout << "================================ TEST_4 ================================" << std::endl;
    std::deque<int> deq1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::deque<int> reverse_deque;

    for (const auto& element : deq1) {
        reverse_deque.push_back(element);
    }

    display(reverse_deque);

    reverse_deque.clear();

    for (const auto& element : deq1) {
        reverse_deque.push_front(element);
    }
    display(reverse_deque);

}

void test5() {
    std::cout << "================================ TEST_5 ================================" << std::endl;
    std::deque<int> deq1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::deque<int> reverse_deque;

    std::copy(deq1.begin(), deq1.end(), std::front_inserter(reverse_deque));

    display(reverse_deque);

    reverse_deque.clear();

    std::copy(deq1.begin(), deq1.end(), std::back_inserter(reverse_deque));

    display(reverse_deque);

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


