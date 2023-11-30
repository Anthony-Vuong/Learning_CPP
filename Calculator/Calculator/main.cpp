#include <iostream>
#include "Calculator.h"
#include "SimpleCalculator.h"


int main() {

	SimpleCalculator c;

	std::string expression;

	std::getline(std::cin, expression);

	c.parse_expression(expression);

	c.calculate();

	return 0;
}