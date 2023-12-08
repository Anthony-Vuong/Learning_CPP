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
	virtual int add(int op1, int op2) = 0;
	virtual int subtract(int op1, int op2) = 0;
	virtual int multiply(int op1, int op2) = 0;
	virtual int divide(int op1, int op2) = 0;
	virtual int remainder(int op1, int op2) = 0;
	virtual void calculate() = 0;
	void parse_expression(std::string exp);
	void run_calculator();
	

};

