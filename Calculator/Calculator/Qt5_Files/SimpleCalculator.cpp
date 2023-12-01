#include <string>
#include <iostream>
#include "SimpleCalculator.h"



int SimpleCalculator::add(int op1, int op2) {
	return op1 + op2;
}
int SimpleCalculator::subtract(int op1, int op2) {
    return op1 - op2;
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

QString SimpleCalculator::calculate() {

    QChar temp_operator{};
	int temp_oper1{};
    int temp_oper2{};
    QString result, mod;


	for (int i{ 0 }; i < operators.size(); i++) {
		temp_operator = operators.at(i);
        switch (temp_operator.unicode()) {
		case '+':
			temp_oper1 = operands.at(0);
            temp_oper2 = operands.at(1);
            result = QString::number(add(temp_oper1, temp_oper2));
			break;
		case '-':
			std::cout << "min" << std::endl;
			temp_oper1 = operands.at(0);
            temp_oper2 = operands.at(1);
            result =  QString::number(subtract(temp_oper1, temp_oper2));
			break;
		case '/':
			temp_oper1 = operands.at(0);
            temp_oper2 = operands.at(1);
            result = QString::number(divide(temp_oper1, temp_oper2));
            mod = QString::number(remainder(temp_oper1, temp_oper2));
            result = result + "r" + mod;
			break;
		case '*':
			temp_oper1 = operands.at(0);
            temp_oper2 = operands.at(1);
            result =  QString::number(multiply(temp_oper1, temp_oper2));
			break;
		case 'x':
			temp_oper1 = operands.at(0);
            temp_oper2 = operands.at(1);
            result =  QString::number(multiply(temp_oper1, temp_oper2));
			break;
		default:
            //std::cout << "Unknown" << std::endl;
            break;
		}
	}
    operands.clear();
    operators.clear();
    return result;
}
