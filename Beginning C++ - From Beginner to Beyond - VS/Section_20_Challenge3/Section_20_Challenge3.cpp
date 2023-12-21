#include <iostream>
#include <set>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

template<typename T1, typename T2>
void display_line_occurences(const std::map<T1, T2>& m) {
	std::cout << "Word" << std::setfill(' ') << std::setw(15) << " " << "Occurences" << std::endl;
	std::cout << std::setfill('=') << std::setw(30) << "=" << std::endl;

	for (const auto& element : m) {
		std::cout << element.first << std::setfill(' ') << std::setw(20 - element.first.length()) << " " << "[ ";
		for (const auto& set_element : element.second) {
			 std::cout << set_element << " ";
		}
		std::cout << "]" << std::endl;
	}
}


template<typename T1, typename T2>
void display_word_count(const std::map<T1, T2>& m) {
	std::cout << "Word" << std::setfill(' ') << std::setw(15) << " " << "Count" << std::endl;
	std::cout << std::setfill('=') << std::setw(30) << "=" << std::endl;
	for (const auto& element : m) {
		std::cout << element.first << std::setfill(' ') << std::setw(20-element.first.length()) << " " << element.second << " " << std::endl;
	}
}


int main()
{

	std::map<std::string, int> word_count;
	std::map<std::string, std::set<int>> line_occurences;
	std::fstream in_file;
	std::string line, word;
	int line_num{ 1 };

	in_file.open("test_file.txt");
	if (!in_file) {
		std::cerr << "Error opening file." << std::endl;
	}
	else{
		std::cout << "File successfully opened." << std::endl;
	}

	while (std::getline(in_file, line)) {
		//std::cout << line << std::endl;

		std::istringstream ss_word{ line };

		while (ss_word >> word) {
			std::cout << word << std::endl;
			auto wc_it = word_count.find(word);
			if (wc_it != word_count.end()) {
				std::cout << "Word found." << std::endl;
				word_count[word] += 1;
				auto lc_it = line_occurences.find(word);
				lc_it->second.insert(line_num);

			}
			else {
				std::cout << "Not found, add word" << std::endl;
				word_count.insert(std::make_pair(word, 1));
				line_occurences.insert(std::make_pair(word, std::set<int>{line_num}));
			}
		}

		line_num++;
	}

	display_word_count(word_count);
	
	std::cout << std::endl;

	display_line_occurences(line_occurences);

	in_file.close();

	return 0;
}

