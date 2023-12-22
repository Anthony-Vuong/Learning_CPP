#include <queue>
#include <vector>
#include <stack>
#include <list>
#include <iostream>


template<typename T>
void display(std::queue<T> q){
        std::cout << "[ ";
        while(!q.empty()){
            std::cout << q.front() << " ";
            q.pop();
        }
        std::cout << "]" << std::endl;

}



void test1(){
    std::cout << "======================== TEST_1 ========================" << std::endl;


    std::queue<int> q;

    for(int i:{1, 2, 3, 4, 5}){
        q.push(i*10);
    }
    display(q);

    q.pop();
    display(q);

    q.pop();
    display(q);

    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;

    
    

}


int main(){

    test1();

    return 0;
}
