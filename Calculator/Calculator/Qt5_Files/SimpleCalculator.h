#pragma once
#include <string>
#include "Calculator.h"

class SimpleCalculator : public Calculator
{
public:

	virtual int add(int op1, int op2) override;
	virtual int subtract(int op1, int op2) override;
	virtual int multiply(int op1, int op2) override;
	virtual int divide(int op1, int op2) override;
	virtual int remainder(int op1, int op2) override;
    virtual QString calculate() override;

};

