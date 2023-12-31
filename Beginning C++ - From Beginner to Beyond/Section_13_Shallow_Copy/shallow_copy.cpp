#include <iostream>

using namespace std;

class Shallow{

private:
	int *data;

public:	
	void set_data(int d){ *data = d;}
	int get_data(){ return *data;}

	
	//Constructor
	Shallow(int d);
	//Copy constructor
	Shallow(const Shallow &source);
	//Destructor
	~Shallow();
	
};

Shallow::Shallow(int d){
	data = new int;
	*data = d;
}

Shallow::Shallow(const Shallow &source)
	:data(source.data){
	cout << "Copy constructor " << endl;
}

Shallow::~Shallow(){
	delete data;
	cout << " Destructor" << endl;
}

void display_shallow(Shallow s){
	cout << s.get_data() << endl;
}

int main()
{
	Shallow obj1{100};
	display_shallow(obj1); // copy will free data when leaving this function, resulting in pointer pointing to invalid data
	
	Shallow obj2{obj1};
	obj2.set_data(500);
	
	
	return 0;
}
