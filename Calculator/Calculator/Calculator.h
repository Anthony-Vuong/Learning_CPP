#pragma once

#include <vector>
#include <string>

class Calculator
{
private:
	
protected:
	std::vector<int> operands;
	std::vector<char> operators;
public:
	Calculator();
	~Calculator();
	virtual void add(int op1, int op2) = 0;
	virtual void subtraction(int op1, int op2) = 0;
	virtual void multiply(int op1, int op2) = 0;
	virtual void divide(int op1, int op2) = 0;
	void parse_expression(std::string exp);
	void calculate();

};

