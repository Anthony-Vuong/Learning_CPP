#include <string>
#include <iostream>
#include "Mystring.h"


// No args constructor implementation
Mystring::Mystring()
	:str{ nullptr } {
	str = new char[1];								// allocate memory on heap for new string
	*str = '\0';									// give the string a terminating null value
}

// Overloaded constructor - provided a str as arg
Mystring::Mystring(const char* s)
	:str{ nullptr } {
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
}

//Destructor
Mystring::~Mystring() {
	delete [] str;									// Free the memory allocated for str
}


Mystring& Mystring::operator=(const Mystring& rhs) {
	std::cout << "Operator = Called" << std::endl;
	if (this == &rhs) {
		return *this;
	}
	delete [] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);
	return *this;
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


