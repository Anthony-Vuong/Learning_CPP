#pragma once
#include <iostream>
#include "Base.h"



class Derived : public Base
{
	using Base::Base;  // inheriting base constructor
private:
	int doubled_value;

public:
	Derived()
		:Base{}, doubled_value {0} {
		std::cout << "No-args DERIVED Constructor" << std::endl;
	}
	Derived(int x)
		:Base{ x }, doubled_value {x * 2} {
		std::cout << "1-arg DERIVED Constructor" << std::endl;
	}
	~Derived() {
		std::cout << "DERIVED Destructor" << std::endl;
	}


};

