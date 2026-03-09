#include <iostream>
using namespace std;

class Demo{
const int value;
public:
Demo(int v):value(v){}
void setValue(int v){
int* ptr=const_cast<int*>(&value);
*ptr=v;
}
void show(){ cout<<value<<endl; }
};

int main(){
Demo d(10);
d.show();
d.setValue(20);
d.show();
}