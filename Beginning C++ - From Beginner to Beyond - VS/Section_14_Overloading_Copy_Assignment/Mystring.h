#pragma once
class Mystring
{
private:
	char* str;

public:

	// No-args constructor
	Mystring();

	// Overloaded constructor
	Mystring(const char* s);

	// Copy Constructor
	Mystring(const Mystring& source);

	//Destructor
	~Mystring();


	// Overloaded assignment operator
	Mystring &operator=(const Mystring &rhs);

	void display() const;
	int get_length() const;
	const char* get_str() const;
};

