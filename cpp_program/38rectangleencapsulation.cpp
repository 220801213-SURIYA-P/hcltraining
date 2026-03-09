#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle{
double width;
double height;
public:
void setWidth(double w){
if(w<=0) throw invalid_argument("bad");
width=w;
}
void setHeight(double h){
if(h<=0) throw invalid_argument("bad");
height=h;
}
double area(){return width*height;}
};

int main(){
Rectangle r;
try{
r.setWidth(5);
r.setHeight(-2);
}catch(exception& e){
cout<<"Invalid value"<<endl;
}
}