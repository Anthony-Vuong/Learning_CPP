#include <iostream>
#include <string>
#include <vector>


class Shape{

private:

public:
        virtual void draw() = 0;
        virtual void rotate() = 0;
        virtual ~Shape(){}
};

class Open_Shape : public Shape{

public:
        virtual ~Open_Shape(){}
};

class Closed_Shape : public Shape{

public:
        virtual ~Closed_Shape(){}

};

class Line : public Open_Shape{
public:
        virtual void draw() override{
            std::cout << "Drawing a line" << std::endl;
        }

        virtual void rotate() override{
            std::cout << "Rotating a line" << std::endl;
        }

        virtual ~Line(){}

};


class Circle : public Closed_Shape{
public:
        virtual void draw() override{
            std::cout << "Drawing a circle" << std::endl;
        }

        virtual void rotate() override{
            std::cout << "Rotating a circle" << std::endl;
        }

        virtual ~Circle(){}

};


class Square : public Closed_Shape{
public:
        virtual void draw() override{
            std::cout << "Drawing a square" << std::endl;
        }

        virtual void rotate() override{
            std::cout << "Rotating a square" << std::endl;
        }

        virtual ~Square(){}

};

void screen_refresh(const std::vector<Shape*> &shapes){
    std::cout << "Refreshing" << std::endl;
    for(const auto p: shapes)
        p->draw();
}



int main(){
    
    // Shape s;                    // Compiler error - can't instantiate object

    // Shape *s = new Shape();     // Compiler error - can't instantiate object
    
    //Circle c;
    //c.draw();
    
    //Shape *ptr = new Circle();

    //ptr->draw();
    //ptr->rotate();
    
    Shape *p1 = new Circle();
    Shape *p2 = new Line();
    Shape *p3 = new Square();

    std::vector<Shape*> shapes{p1, p2, p3};

    for(const auto p: shapes){
        p->draw();
    }

    delete [] p1;
    delete [] p2;
    delete [] p3;

    return 0;
}
