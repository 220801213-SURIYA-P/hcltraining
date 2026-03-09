#include <iostream>
using namespace std;

class Demo{
string name;
public:
Demo(string n){name=n; cout<<"Create "<<name<<endl;}
~Demo(){cout<<"Destroy "<<name<<endl;}
};

int main(){
try{
Demo a("A");
{
Demo b("B");
throw 1;
}
}catch(...){
cout<<"Exception"<<endl;
}
}