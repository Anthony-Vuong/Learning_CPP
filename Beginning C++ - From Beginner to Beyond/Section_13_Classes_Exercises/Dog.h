#ifndef DOG_H
#define DOG_H
#include <string>



class Dog
{
	
private:
	std::string name;
	int age;

public:
	std::string get_name();
	void set_name(std::string s);
	int get_age();
	void set_age(int a);
	int get_human_years();
	void speak();
	
};

#endif // DOG_H
