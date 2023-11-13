#pragma once
class Mystring
{
	// friend functions allow us to use global functions without gaving to use getters
	// Overloading (+) operator
	friend Mystring operator+(const Mystring& lhs, const Mystring& rhs);			// lowercase operation on string

	// Overloading (-) operator
	friend Mystring operator-(const Mystring& obj);									// concatenation operation on string

	// Overloading (==) operator
	friend bool operator==(const Mystring& lhs, const Mystring& rhs);				// lowercase operation on string

	// Overloading (<<) operator
	friend std::ostream& operator<<(std::ostream &os, const Mystring &rhs);

	// Overloading (>>) operator
	friend std::istream& operator>>(std::istream& in, Mystring& rhs);

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
	Mystring& operator=(Mystring&& rhs);					//not const arg because rhs is being modified, setting to nullptr




	void display() const;
	int get_length() const;
	const char* get_str() const;
};

