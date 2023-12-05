#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>

int main(){
    std::string line;
    std::ifstream in_file;
    in_file.open("To_The_Memory_of_The_Same_Dog.txt");

    if(!in_file){
        std::cerr << "Can't open the in_file" << std::endl;
        return -1;
    }

/*  // Grabs one line at a time
    while(std::getline(in_file, line)){
        std::cout << line << std::endl;
    }
*/

    char c;
    // Grabs one character at a time
    while(in_file.get(c)){
            std::cout << c;
    }
    in_file.close();

    return 0;
}
