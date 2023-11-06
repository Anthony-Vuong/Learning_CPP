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
	Dog(std::string name = "None", int age=0);
	Dog(const Dog &source);
	// Destructor
	~Dog(){
		std::cout << name << " object has been destroyed" << std::endl;
	}
	
	// No args constructor
//	Dog(){
//		name = "None";
//		age = 0;
//	}
//	// 2 args constructor
//	Dog(std::string n, int a){
//		name = n;
//		age = a;
//	}

};

// Delegating constructor
Dog::Dog(std::string name_val, int age_val)
:name{name_val}, age{age_val}{
		std::cout << "Constructor for " << name << std::endl;
}

// Copy Constructor
Dog::Dog(const Dog &source)
:Dog{source.name, source.age}{
		std::cout << "Copy constructor for " << name << std::endl;
}




#endif // DOG_H
