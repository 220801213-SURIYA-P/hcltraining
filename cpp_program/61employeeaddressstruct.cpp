#include <iostream>
using namespace std;

struct Address{
string city;
int pin;
};

struct Employee{
string name;
int age;
Address addr;
};

int main(){
Employee e;
cin>>e.name>>e.age>>e.addr.city>>e.addr.pin;
cout<<e.name<<" "<<e.age<<" "<<e.addr.city<<" "<<e.addr.pin<<endl;
}