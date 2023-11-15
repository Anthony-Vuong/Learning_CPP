#pragma once
class Mystring
{
	
	// Overloading (<<) operator
	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);

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




	// Overloading (-) operator
	Mystring operator-();								// concatenation operation on string

	// Overloading (==) operator
	bool operator==(const Mystring& rhs);				// equality operation on string

	// Overloading (!=) operator
	bool operator!=(const Mystring& rhs);				// equality operation on string

	// Overloading (<) operator
	bool operator<(const Mystring& rhs);				// less than operation on string

	// Overloading (>) operator
	bool operator>(const Mystring& rhs);				// more than operation on string

	// Overloading (+) operator
	Mystring operator+(const Mystring& rhs);			// lowercase operation on string

	// Overloading (+=) operator
	Mystring& operator+=(const Mystring& rhs);						// concatenation assignment operation on string

	// Overloading (*) operator
	Mystring operator*(unsigned int multiplier);		// concatenation assignment operation on string

	// Overloading (*=) operator
	Mystring& operator*=(unsigned int multiplier);					// concatenation assignment operation on string

	// Overloading (++) operator
	Mystring& operator++();								// concatenation operation on string

	// Overloading (++) operator
	Mystring operator++(int n);								// concatenation operation on string

	// Overloading(--) operator
	Mystring& operator--();								// concatenation operation on string

	// Overloading(--) operator
	Mystring& operator--(int n);								// concatenation operation on string




	void display() const;
	int get_length() const;
	const char* get_str() const;
};

