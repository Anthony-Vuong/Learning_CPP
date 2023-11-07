#include <iostream>
#include <vector>

using namespace std;

class Move{

private:
	int *data;

public:	
	void set_data(int d){ *data = d;}
	int get_data(){ return *data;}

	
	//Constructor
	Move(int d);
	//Copy constructor
	Move(const Move &source);
	//Destructor
	~Move();
	
};

//Constructor
Move::Move(int d){
	data = new int;
	*data = d;
}

//Copy constructor
Move::Move(const Move &source)
	:Move{*source.data}{
	cout << "Copy constructor " << endl;
}

Move::Move(Move &&source)
	:data{source.data}{
	source.data = nullptr;
	cout << "Move constructor " << endl;
}

//Destructor
Move::~Move(){
	cout << " Destructor" << endl;
	if(data != nullptr){
		cout << "Freeing " << *data << endl;
	}
	else{
		cout << "Freeing nullptr" << endl;
	}
	delete data;
}

void display_Move(Move s){
	cout << s.get_data() << endl;
}

int main()
{
	vector<Move> vec1;
	vec1.push_back(Move{10});
	vec1.push_back(Move{20});
	vec1.push_back(Move{30});
	vec1.push_back(Move{40});
	vec1.push_back(Move{50});
	vec1.push_back(Move{60});
	vec1.push_back(Move{70});
	vec1.push_back(Move{80});
	
	
	return 0;
}
