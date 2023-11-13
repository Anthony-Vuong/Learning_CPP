#include <string>
#include <iostream>
#include "Mystring.h"


// No args constructor implementation
Mystring::Mystring()
	:str{ nullptr } {
	std::cout << "No arg Constructor: " << std::endl;
	str = new char[1];								// allocate memory on heap for new string
	*str = '\0';									// give the string a terminating null value
}

// Overloaded constructor - provided a str as arg
Mystring::Mystring(const char* s)
	:str{ nullptr } {
	std::cout << "Overloaded Constructor: " << std::endl;
	if (s == nullptr) {
		str = new char[1];							// allocate memory on heap for new string
		*str = '\0';								// give the string a terminating null value
	}
	else {
		str = new char[std::strlen(s) + 1];			// allocate memory on heap for new string with length of s
		std::strcpy(str, s);						// copy over passed in s into str
	}
}

// Copy constructor
Mystring::Mystring(const Mystring& source)
	:str{ nullptr } {
	str = new char[std::strlen(source.str) + 1];	// allocate memory on heap for new string with length of s
	std::strcpy(str, source.str);					// copy over passed in s into str
	std::cout << "Copy Constructor: " << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring&& source)
	:str{ source.str } {
	source.str = nullptr;
	std::cout << "Move Constructor: " << std::endl;
}


//Destructor
Mystring::~Mystring() {
	std::cout << "Destructor: " << std::endl;
	delete[] str;									// Free the memory allocated for str
}


Mystring& Mystring::operator=(const Mystring& rhs) {
	std::cout << "Copy Operator = Called" << std::endl;
	if (this == &rhs) {
		return *this;
	}
	delete[] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);
	return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs) {
	std::cout << "Move Operator = Called" << std::endl;
	if (this == &rhs) {
		return *this;
	}
	delete[] str;		// free or deallocate this objects string
	str = rhs.str;		// set this objects string to the rhs string
	rhs.str = nullptr;	// nullify the rhs string
	return *this;
}

// Overloading (+) operator
Mystring Mystring::operator+(const Mystring& rhs) const {			// concatenation operation on string
	char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

// Overloading (-) operator
Mystring Mystring::operator-() const {								//  lowercase operation on string
	char* buff = new char[std::strlen(str) + 1];
	std::strcpy(buff, str);
	for (int i{ 0 }; i < std::strlen(buff); i++) {
		buff[i] = std::tolower(buff[i]);
	}
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

// Overloading (==) operator
bool Mystring::operator==(const Mystring& rhs) const {				// lowercase operation on string
	return (std::strcmp(str, rhs.str)==0);
}


void Mystring::display() const {
	std::cout << str << ": " << get_length() << std::endl;
}

int Mystring::get_length() const {
	return std::strlen(str);
}

const char* Mystring::get_str() const {
	return str;
}


