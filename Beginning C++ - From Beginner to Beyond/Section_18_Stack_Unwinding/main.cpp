#include <iostream>

/*
 *
 *                                  STACK - LIFO - Last in FIrst Out
 *                                  Each time we pop a function off the call stack we run the contents of the function.
 *                          |                           |
 *                          |                           |
 *                          |                           |
 *                          |---------------------------|                           
 *                          |                           |
 *                          |    func_c() throw 100;    |   * If we throw exception in this function, we pop off functions until we fire the exception handler     
 *                          |                           |
 *                          |---------------------------|                           
 *                          |                           |
 *                          |     func_b()              |        
 *                          |                           |
 *                          |---------------------------|                           
 *                          |                           |
 *                          |     func_a()              |   
 *                          |                           |
 *                          |---------------------------|                           
 *                          |                           |
 *                          |      main()  try/catch    |   * We catch the exception here in main when it gets popped off
 *                          |                           |
 *                          |---------------------------|
 *
 *
 *
 *
 */


/*
 *
 *                                  STACK - LIFO - Last in FIrst Out
 *                                  Each time we pop a function off the call stack we run the contents of the function.
 *                          |                           |
 *                          |                           |
 *                          |                           |
 *                          |---------------------------|                           
 *                          |                           |
 *                          |     func_c() throw 100;   |   * If we throw exception in this function, we pop off functions until we fire the exception handler,     
 *                          |                           |     the rest of each function will not end.
 *                          |---------------------------|                           
 *                          |                           |
 *                          |     func_b() try/catch    |   * We catch the exception thrown here, func_c() will not finish, however the other functions will
 *                          |                           |     finish.
 *                          |---------------------------|                           
 *                          |                           |
 *                          |           func_a()        |   
 *                          |                           |
 *                          |---------------------------|                           
 *                          |                           |
 *                          |      main()  try/catch    |   * We catch the exception here in main when it gets popped off
 *                          |                           |
 *                          |---------------------------|
 *
 *
 *
 *
 */
// FUnction prototypes
void func_a();
void func_b();
void func_c();


void func_a(){

    std::cout << "Starting 'a' method" << std::endl;
    func_b();
    std::cout << "Ending 'a' method" << std::endl;

}

void func_b(){

    std::cout << "Starting 'b' method" << std::endl;
    try{
        func_c();
    }catch(int &ex){
        std::cerr << "Integer exception" << std::endl;

    }
    std::cout << "Ending 'b' method" << std::endl;

}

void func_c(){

    std::cout << "Starting 'c' method" << std::endl;
    throw 100;
    std::cout << "Ending 'c' method" << std::endl;

}

int main(){


    std::cout << "Starting main method" << std::endl;
    try{
        func_a();
    }catch(int &ex){
        std::cerr << "Integer Exception" << std::endl;
    }
    std::cout << "Ending main method" << std::endl;
    
    return 0;
}
