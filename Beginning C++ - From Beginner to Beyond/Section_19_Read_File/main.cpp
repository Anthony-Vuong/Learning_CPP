#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
int main(){

    std::string line;
    int num;
    double dub;
    std::fstream in_file, in_file1;
    in_file.open("input.txt");
    in_file1.open("input2.txt");

    if(!in_file){
        std::cerr << "Can't open file" << std::endl;
        return -1;
    }

    if(!in_file1){
        std::cerr << "Can't open in_file1" << std::endl;
        return -1;
    }
    std::cout << "File is good to use." << std::endl;
    
    // Read one line from input file
    in_file >> line >> num >> dub;
    std::cout << "The first line is " << line << std::endl;        
    std::cout << "The second line is " << num << std::endl;        
    std::cout << "The third line is " << dub << std::endl;        


    while(!in_file1.eof()){
        in_file1 >> line >> num >> dub;
        std::cout << std::setw(10) << std::left << line
                  << std::setw(10) << num
                  << std::setw(10) << dub
                  << std::endl;
    }






    in_file.close();
    std::cout << "File is closed." << std::endl;
    in_file1.close();
    std::cout << "File1 is closed." << std::endl;
    
    return 0;
}
