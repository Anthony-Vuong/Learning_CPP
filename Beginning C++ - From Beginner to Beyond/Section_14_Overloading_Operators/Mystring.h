#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
	//
friend bool operator==(const Mystring &lhs, const Mystring &rhs);
friend Mystring operator-(const Mystring &obj);
friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

private:
	char *str; //pointer to a char[], holds C-style string
	
public:
	//Constructor
	Mystring();
	//Overloaded constructor
	Mystring(const char *s);
	//Move constructor
	Mystring(Mystring &&source);
	//Copy constructor
	Mystring(const Mystring &source);
	//Destructor
	~Mystring();
	
	Mystring &operator=(const Mystring &rhs);   // prototype for overloading "=" operator
	Mystring &operator=(Mystring &&rhs);		// prototype for move assignment
	
//	Mystring operator-()const;
//	Mystring operator+(const Mystring &rhs) const;
//	bool operator==(const Mystring &rhs) const;
	
	void display() const;
	int get_length() const;
	const char*get_str() const;

};


#endif // MYSTRING_H
