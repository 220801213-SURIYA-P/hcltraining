#include <iostream>
#include <cmath>
using namespace std;

class Function{
public:
virtual double evaluate(double x){return x;}
};

class Square:public Function{
public:
double evaluate(double x){return x*x;}
};

int pow(int a,int b){return std::pow(a,b);}
double pow(double a,double b){return std::pow(a,b);}

int main(){
cout<<pow(2,3)<<endl;
cout<<pow(2.0,3.0)<<endl;
Function* f=new Square();
cout<<f->evaluate(4)<<endl;
delete f;
}