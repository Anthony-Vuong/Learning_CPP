#include <iostream>

using namespace std;

class Deep{

private:
	int *data;

public:	
	void set_data(int d){ *data = d;}
	int get_data(){ return *data;}

	
	//Constructor
	Deep(int d);
	//Copy constructor
	Deep(const Deep &source);
	//Destructor
	~Deep();
	
};

//Constructor
Deep::Deep(int d){
	data = new int;
	*data = d;
}

//Copy constructor
Deep::Deep(const Deep &source)
	:Deep{*source.data}{
	cout << "Copy constructor " << endl;
}

//Destructor
Deep::~Deep(){
	delete data;
	cout << " Destructor" << endl;
}

void display_Deep(Deep s){
	cout << s.get_data() << endl;
}

int main()
{
	Deep obj1{100};
	display_Deep(obj1); 
	
	Deep obj2{obj1};
	obj2.set_data(500);
	
	
	return 0;
}
