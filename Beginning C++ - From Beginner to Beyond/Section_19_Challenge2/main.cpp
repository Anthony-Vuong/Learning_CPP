#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>

// Helper function to calculate student answers score with key 
int calculate_score(std::string student_answers, std::string legend){

    int temp_score{0};

    for(int i{0}; i<5; i++){
        if(student_answers[i] == legend[i])
                temp_score++;
    }
    return temp_score;
}


int main(){

    std::string line, legend, temp_name;
    std::ifstream in_file;
    double sum_scores{0}; 
    int num_students{0}, line_num{0}, temp_score{0};

    in_file.open("scores.txt");

    if(!in_file){
        std::cerr << "Error opening file" << std::endl;
        return -1;
    }

    // THe first line is the key, read to legend
    in_file >> legend;
        
    // Printing the top header and the tp divider
    std::cout << "Student" << std::setw(15) << std::right << "Score" << std::endl;   
    std::cout << std::setw(25) << std::setfill('-') << std::right << "\n" << std::endl;
    
    // Loop through file until end of file, read line into string line
    while(std::getline(in_file, line)){
        // check every other line for student name, if line# is even, then it contains name
        if(line_num % 2 != 0){
            std::cout << line << std::setw(20-line.length()) << std::setfill(' ') << std::right;
        }
        else if(line_num% 2 == 0 && line_num != 0){
            // Every other line is the student answers, pass into calculate function and print to monitor
            int temp_score = calculate_score(line, legend);
            sum_scores += temp_score;
            num_students++;
            std::cout << temp_score << std::endl;
        }
        // Keep track of the line number
        line_num++;
    }

    // Printing bottom divder and the average score
    std::cout << std::setw(25) << std::setfill('-') << std::right << "\n" << std::endl;
    std::cout << "Average Score" << std::setw(9) << std::setfill(' ') <<  std::right << static_cast<double>(sum_scores/num_students)  << std::endl;   




    in_file.close();
    return 0;
}
