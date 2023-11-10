#pragma once
#include "Base.h"


class Derived : public Base {

	//Derived class cannot access private member, but can access protected


public:
	void access_base_members() {
		a = 100;
		b = 200;
		//c = 300;   // This is not accessible from base class
	}


};

