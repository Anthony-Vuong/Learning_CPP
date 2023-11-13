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

	// Move Constructor
	Mystring(Mystring&& source);

	//Destructor
	~Mystring();

	// Overloaded assignment operator - COPY
	Mystring& operator=(const Mystring& rhs);

	// Overloaded assignment operator - MOVE
	Mystring& operator=(Mystring&& rhs);		//not const arg because rhs is being modified, setting to nullptr

	void display() const;
	int get_length() const;
	const char* get_str() const;
};

