#pragma once
#include <iostream>

class Base
{
private:
	int value;

public:

	// No arg constructor
	Base()
		: value{ 0 } {
		std::cout << "Base no-arg constructor" << std::endl;
	}

	// 1-arg constructor
	Base(int x) 
		: value{ x } {
		std::cout << "Base 1-arg constructor" << std::endl;
	}

	// Copy constructor
	Base(const Base& other)
		:value{other.value} {
		std::cout << "Base COPY constructor" << std::endl;
	}

	Base& operator=(const Base &rhs) {
		std::cout << "Equal operand overloaded constructor" << std::endl;
		if (&rhs == this) {
			return *this;
		}
		value = rhs.value;
		return *this;
	}

	~Base() {
		std::cout << "Base Destructor" << std::endl;
	}


};

