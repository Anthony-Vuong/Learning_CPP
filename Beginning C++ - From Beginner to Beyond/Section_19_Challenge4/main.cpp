#include <iostream>
#include <fstream>



int main(){

    std::ofstream script_copy{"./script_with_lines.txt"};
    std::ifstream script{"romeoandjuliet.txt"};


    if(!script_copy){
        std::cerr << "Error opening output file" << std::endl;
        return -1;
    }
    if(!script){
        std::cerr << "Error opening input file" << std::endl;
    }


    int line_num{1};
    std::string line;

    while(std::getline(script, line)){

        if(!line.empty()){
            script_copy << line_num << " " << line << std::endl;
            line_num++;
        }
        else{
            script_copy << " " << line << std::endl;
        }
    }


    script_copy.close();
    script.close();

    return 0;
}
