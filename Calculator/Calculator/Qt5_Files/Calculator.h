#pragma once

#include <vector>
#include <string>
#include <QString>

class Calculator
{
private:
	
protected:
	std::vector<int> operands;
    std::vector<QChar> operators;
public:
	Calculator();
	~Calculator();
	virtual int add(int op1, int op2) = 0;
	virtual int subtract(int op1, int op2) = 0;
	virtual int multiply(int op1, int op2) = 0;
	virtual int divide(int op1, int op2) = 0;
	virtual int remainder(int op1, int op2) = 0;
    virtual QString calculate() = 0;
    void parse_expression(QString exp);
	void run_calculator();

	

};

