#pragma once
#include <iostream>

class Base
{
public:
	int a{ 0 };
	void display() { std::cout << a << ", " << b << " ," << c << std::endl; };
protected:
	int b{ 0 };
private:
	int c{ 0 };
};




