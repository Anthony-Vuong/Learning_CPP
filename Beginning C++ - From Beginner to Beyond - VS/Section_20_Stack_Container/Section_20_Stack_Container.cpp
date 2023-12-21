#include <iostream>
#include <stack>
#include <vector>
#include <list>

template<typename T>
void display_num_stack(std::stack<T> s) {
    std::cout << "[ ";
    while (!s.empty()) {
        T top = s.top();
        std::cout << top << " ";
        s.pop();
    }
    std::cout << " ]\n" << std::endl;;

}

template<typename T1, typename T2>
void display_num_vec_stack(std::stack<T1, T2> s) {
    std::cout << "[ ";
    while (!s.empty()) {
        T top = s.top();
        std::cout << top << " ";
        s.pop();
    }
    std::cout << " ]\n" << std::endl;;

}

void test1() {
    std::cout << "===================== TEST_1 =====================" << std::endl;

    std::stack<int> num_stack;
    std::stack<int, std::vector<int>> num_vec_stack;
    std::stack<int, std::list<int>> num_list_stack;
    std::stack<int, std::deque<int>> num_deque_stack;

    for (int i : {1, 2, 3, 4, 5}) {
        num_stack.push(i);
    }
    display_num_stack(num_stack);

    num_stack.push(69);
    display_num_stack(num_stack);

    num_stack.pop();
    num_stack.pop();
    display_num_stack(num_stack);

    while (!num_stack.empty()) {
        num_stack.pop();
    }
    display_num_stack(num_stack);

    std::cout << "Size of num_stack is " << num_stack.size() << std::endl;

    num_stack.push(99);
    display_num_stack(num_stack);

    num_stack.top() = 12345;
    display_num_stack(num_stack);

}

void test2() {
    std::cout << "===================== TEST_2 =====================" << std::endl;

    std::stack<int> num_stack;
    std::stack<int, std::vector<int>> num_vec_stack;
    std::stack<int, std::list<int>> num_list_stack;
    std::stack<int, std::deque<int>> num_deque_stack;

    for (int i : {1, 2, 3, 4, 5}) {
        num_vec_stack.push(i);
    }
    display_num_vec_stack(num_vec_stack);

    /*
    num_stack.push(69);
    display(num_stack);

    num_stack.pop();
    num_stack.pop();
    display(num_stack);

    while (!num_stack.empty()) {
        num_stack.pop();
    }
    display(num_stack);

    std::cout << "Size of num_stack is " << num_stack.size() << std::endl;

    num_stack.push(99);
    display(num_stack);

    num_stack.top() = 12345;
    display(num_stack);
    */
}


int main()
{
    test1();

    return 0;
}

