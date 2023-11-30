#include <iostream>
#include <vector>
#include "Calculator.h"



Calculator::Calculator() {
	std::cout << "Constructor" << std::endl;
}
Calculator::~Calculator() {
	std::cout << "Destructor" << std::endl;
}
 
void Calculator::parse_expression(std::string exp){
	for (char c: exp) {
		if (c != ' ' && c >= 48 && c <= 57) {
			operands.push_back(c - '0');
		}
		if (c != ' ' && (c == 42 || c == 120 || c == 43 || c == 45 || c == 47)) {
			operators.push_back(c);
		}
	}
}

void Calculator::calculate() {

	char temp_operand{};

	for (int i{ 0 }; i < operators.size(); i++) {
		std::cout << operators.at(i) << std::endl;
		temp_operand = operators.at(i);
		switch (temp_operand) {
			case '+': 
				std::cout << "Add" << std::endl;
				break;
			case '-':
				std::cout << "Subtract" << std::endl;
				break;
			case '/':
				std::cout << "Divide" << std::endl;
				break;
			case '*':
				std::cout << "Multiply" << std::endl;
				break;
			case 'x':
				std::cout << "Multiply" << std::endl;
				break;
			default: 
				std::cout << "Unknown" << std::endl;

		}
	}
}


