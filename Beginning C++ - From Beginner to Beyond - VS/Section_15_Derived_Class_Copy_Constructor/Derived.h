#pragma once
#include "Base.h"

class Derived : public Base
{
private:
	int doubled_value;

public:
	// No args constructor
	Derived() 
		:doubled_value{ 0 } {
		std::cout << "Derived no arg constructor" << std::endl;
	}

	Derived(int x) 
		:doubled_value{x*2} {
		std::cout << "Derived 1-arg constructor" << std::endl;
	}

	Derived(const Derived &other) 
		:Base(other), doubled_value{other.doubled_value} {
		std::cout << "Derived COPY constructor" << std::endl;
	}

	Derived &operator=(const Derived& rhs) {
		std::cout << "Derived overloaded equal operand" << std::endl;
		if (this == &rhs) {
			return *this;
		}
		Base::operator=(rhs);
		doubled_value = rhs.doubled_value;
		return *this;
	}

	~Derived() {
		std::cout << "Derived Destructor" << std::endl;
	}

};

