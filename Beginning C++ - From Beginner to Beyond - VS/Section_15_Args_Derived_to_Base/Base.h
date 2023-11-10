#pragma once
#include <iostream>

class Base
{
private:
	int value;
public:
	Base()
		:value{ 0 } {
		std::cout << "No-args BASE Constructor" << std::endl;
	}
	Base(int x)
		:value{ x } {
		std::cout << "1 - Arg BASE Constructor" << std::endl;
	}
	~Base() {
		std::cout << "BASE Destructor" << std::endl;
	}

};

