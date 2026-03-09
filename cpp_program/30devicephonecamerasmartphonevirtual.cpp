#include <iostream>
using namespace std;

class Device{
public:
string brand;
};

class Phone:virtual public Device{
public:
void call(){cout<<"Calling"<<endl;}
};

class Camera:virtual public Device{
public:
void photo(){cout<<"Photo"<<endl;}
};

class Smartphone:public Phone,public Camera{
public:
void show(){
brand="Apple";
cout<<brand<<endl;
call();
photo();
}
};

int main(){
Smartphone s;
s.show();
}