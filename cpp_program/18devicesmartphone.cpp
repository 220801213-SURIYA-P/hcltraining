#include <iostream>
using namespace std;

class Device{
public:
    void power(){ cout<<"Device on"<<endl; }
};

class Mobile:public Device{
public:
    void call(){ cout<<"Calling"<<endl; }
};

class Smartphone:public Mobile{
public:
    void internet(){ cout<<"Internet"<<endl; }
};

int main(){
    Smartphone s;
    s.power();
    s.call();
    s.internet();
}