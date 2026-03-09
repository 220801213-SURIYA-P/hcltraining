#include <iostream>
using namespace std;

class Shape{
public:
virtual ~Shape(){}
};

class Circle:public Shape{
public:
void draw(){ cout<<"circle"<<endl; }
};

int main(){
Shape* s=new Circle();
Circle* c=dynamic_cast<Circle*>(s);
if(c) c->draw();
delete s;
}