#include <iostream>
using namespace std;

class Demo{
public:
Demo(){cout<<"Construct"<<endl;}
~Demo(){cout<<"Destruct"<<endl;}
};

int main(){
Demo* obj=new Demo();
delete obj;
}