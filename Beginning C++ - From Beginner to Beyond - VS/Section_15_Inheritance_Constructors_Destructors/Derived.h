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
		: doubled_value{ 0 } {
		std::cout << "No-args DERIVED Constructor";
	}
	Derived(int x) 
		: doubled_value{x*2} {
		std::cout << "1-arg DERIVED Constructor";
	}
	~Derived(){
		std::cout << "DERIVED Denstructor";
	}


};

