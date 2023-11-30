#pragma once
#include <string>
#include "Calculator.h"

class SimpleCalculator : public Calculator
{
public:

	virtual void add(int op1, int op2) override;
	virtual void subtraction(int op1, int op2) override;
	virtual void multiply(int op1, int op2) override;
	virtual void divide(int op1, int op2) override;


};

