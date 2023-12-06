#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>

void num_found_words(std::string str, std::string key, int& found, int &num_words){
    std::string temp_word;
    int i{0}, word_flag{0};
    char c;
    
    do{    
        c = str.at(i);
        if(isalpha(c) && word_flag == 0){
            word_flag = 1;
            temp_word += tolower(c);
        }
        else if(isalpha(c) && word_flag ==1){
            temp_word += tolower(c);
        }
        else if(isspace(c) && word_flag == 1){
            if(temp_word.find(key) != std::string::npos){
                found++;
            }
            word_flag = 0;
            num_words++;
            temp_word.clear();
        }
        i++;    
    }while(i < str.length());

    if(!str.empty()){
        if(temp_word.find(key) != std::string::npos){
            found++;
        }
        num_words++;
    }
    
}

void str_lower(std::string &s){
        for(int i{0}; i<s.length(); i++){
            s.at(i) = tolower(s.at(i));
        }
}

int main(){

    std::string line, key;
    int num_words{0}, found_words{0};
    std::ifstream infile;

    infile.open("romeoandjuliet.txt");

    // Check if the file can be opened, if not, error out
    if(!infile){
        std::cerr << "Cannot open file" << std::endl;
        return -1;
    }


    std::cout << "Enter the word you'd like to find: ";
    std::cin >> key;

    str_lower(key);

    while(std::getline(infile, line)){
        if(!line.empty())
            num_found_words(line, key, found_words, num_words);
    }


    std::cout << num_words<< " words were searched..." << std::endl;

    std::cout << "The substring " << key << " was found " << found_words << " times" << std::endl;
    // Close the file
    infile.close();
    return 0;
}
