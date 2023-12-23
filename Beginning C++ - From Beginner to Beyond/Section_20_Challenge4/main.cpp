#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <vector>

template<typename T>
void display_stack(std::stack<T> s) {
    std::cout << "[ ";
    while (!s.empty()) {
        T top = s.top();
        std::cout << top << " ";
        s.pop();
    }
    std::cout << "]\n" << std::endl;;

}

template<typename T>
void display_queue(std::queue<T> q){
        std::cout << "[ ";
        while(!q.empty()){
            std::cout << q.front() << " ";
            q.pop();
        }
        std::cout << "]" << std::endl;

}

bool is_palindrome(std::string str){

    int i{0};     
    char c;

    std::stack<char> str_stack;
    std::queue<char> str_queue;
    
    while(i < str.length()){

        c = str.at(i);
         
        if(isalpha(c)){
            str_stack.push(static_cast<char>(toupper(c)));
            str_queue.push(static_cast<char>(toupper(c)));
        }
        i++;
    }
    

    while(!str_stack.empty()){
        char stack_top = str_stack.top();
        char queue_front = str_queue.front();

        if(stack_top != queue_front){
            return false;
        }
        
        str_stack.pop();
        str_queue.pop();

    }



    return true;
}





int main(){

    std::vector<std::string> test_strings{

        "Race car",
        "C++",
        "Madam",
        "A santa at Nasa",
        "A toyota's a toyota",
        "Screwdriver",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama",
        "rudolph eats grass",
        "a", "aaa", "abba"


    };

    bool is_pal;

    std::cout << std::boolalpha;
    for(auto str: test_strings){
        is_pal = is_palindrome(str);
        std::cout << str << " is a palindrome: " << is_pal << std::endl;

    }

    return 0;
}
