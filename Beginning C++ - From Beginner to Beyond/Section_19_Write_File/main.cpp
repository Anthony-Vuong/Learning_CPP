#include <iostream>
#include <fstream>
#include <string>

int main(){


    std::ofstream out_file{"./output.txt"};

    if(!out_file){
        std::cerr << "Error opening file" << std::endl;
        return -1;
    }

    std::string line;
    std::cout << "Enter something to the file: ";

    std::getline(std::cin, line);
    out_file << line << std::endl;


    std::ofstream out_file1{"./output1.txt", std::ios::app};

    if(!out_file1){
        std::cerr << "Error opening file1" << std::endl;
        return -1;
    }

    std::string line1;
    std::cout << "Enter something to the file: ";

    std::getline(std::cin, line1);
    out_file1 << line1 << std::endl;


    std::ofstream poem_copy{"./poem_copy.txt"};
    std::ifstream poem{"sonnet18.txt"};


    if(!poem_copy){
        std::cerr << "Can't open poem copy" << std::endl;
        return -1;
    }

    if(!poem){
        std::cerr << "Can't open poem" << std::endl;
        return -1;
    }

    /*
    std::string line2;
    while(std::getline(poem, line)){
        poem_copy << line << std::endl; 

    }
    */
    char c;
    while(poem.get(c)){
        poem_copy.put(c);
    }




    
    poem.close();
    poem_copy.close();
    out_file1.close();
    out_file.close();
    return 0;
}
