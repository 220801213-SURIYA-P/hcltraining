#include <iostream>
using namespace std;

class Device{
protected:
string brand;
public:
void setBrand(string b){brand=b;}
};

class Mobile:public Device{
protected:
int battery;
public:
void setBattery(int b){battery=b;}
};

class Smartphone:public Mobile{
string os;
public:
void setPhone(string b,int bat,string system){
brand=b;
battery=bat;
os=system;
}
void show(){
cout<<brand<<" "<<battery<<" "<<os<<endl;
}
};

int main(){
Smartphone ph;
ph.setPhone("Samsung",5000,"Android");
ph.show();
}