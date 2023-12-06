#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>

void found_words(std::string str, std::string key, int& found){
    std::string temp_word;
    int i{0};
    char c;
    while(i < str.length()){
        if(temp_word.find(key) != std::string::npos){
//            std::cout << "check" << std::endl;
            found++;
            temp_word.clear();
        }
        else{
            c = str.at(i);
            if(!std::isspace(c) && c != '\n'){
                temp_word += tolower(c);
            }
        }
        i++;   
    }

    if(temp_word.find(key) != std::string::npos){
        found++;
    }
    
}

void str_lower(std::string &s){
        for(int i{0}; i<s.length(); i++){
            s.at(i) = tolower(s.at(i));
        }
}

int main(){

    std::string line, key;
    int num_words{0};
    std::ifstream infile;

    infile.open("Romeo_and_Juliet.txt");

    // Check if the file can be opened, if not, error out
    if(!infile){
        std::cerr << "Cannot open file" << std::endl;
        return -1;
    }


    std::cout << "Enter the word you'd like to find: ";
    std::cin >> key;

    str_lower(key);

    while(std::getline(infile, line)){

        found_words(line, key, num_words);

    }


    std::cout << num_words << std::endl;
    // Close the file
    infile.close();
    return 0;
}
