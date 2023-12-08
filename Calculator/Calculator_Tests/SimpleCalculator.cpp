#include <string>
#include <iostream>
#include "SimpleCalculator.h"



int SimpleCalculator::add(int op1, int op2) {
	return op1 + op2;
}
int SimpleCalculator::subtract(int op1, int op2) {
	return op2 - op1;
}
int SimpleCalculator::multiply(int op1, int op2) {
	return op1 * op2;
}
int SimpleCalculator::divide(int op1, int op2) {
	return op1 / op2;
}

int SimpleCalculator::remainder(int op1, int op2) {
	return op1 % op2;
}

void SimpleCalculator::calculate() {

	char temp_operator{};
	int temp_oper1{};
	int temp_oper2{};
	int result, mod;


	for (int i{ 0 }; i < operators.size(); i++) {
		temp_operator = operators.at(i);
		switch (temp_operator) {
		case '+':
			temp_oper1 = operands.at(0);
			temp_oper2 = operands.at(1);
			result = add(temp_oper1, temp_oper2);
			std::cout << "..........Answ: " << result << std::endl;
			break;
		case '-':
			std::cout << "min" << std::endl;
			temp_oper1 = operands.at(0);
			temp_oper2 = operands.at(1);
			result = subtract(temp_oper1, temp_oper2);
			std::cout << "..........Answ: " << result << std::endl;
			break;
		case '/':
			temp_oper1 = operands.at(0);
			temp_oper2 = operands.at(1);
			result = divide(temp_oper1, temp_oper2);
			mod = remainder(temp_oper1, temp_oper2);
			std::cout << "..........Answ: " << result << "r" << mod << std::endl;
			break;
		case '*':
			temp_oper1 = operands.at(0);
			temp_oper2 = operands.at(1);
			result = multiply(temp_oper1, temp_oper2);
			std::cout << "..........Answ: " << result << std::endl;
			break;
		case 'x':
			temp_oper1 = operands.at(0);
			temp_oper2 = operands.at(1);
			result = multiply(temp_oper1, temp_oper2);
			std::cout << "..........Answ: " << result << std::endl;
			break;
		default:
			std::cout << "Unknown" << std::endl;
		}
	}
}