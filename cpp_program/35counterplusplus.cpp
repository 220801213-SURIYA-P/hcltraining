#include <iostream>
using namespace std;

class Counter{
int count;
public:
Counter(){count=0;}
Counter& operator++(){
++count;
return *this;
}
Counter operator++(int){
Counter temp=*this;
count++;
return temp;
}
int get(){return count;}
};

int main(){
Counter c;
int x=c++;
int y=++c;
cout<<x<<" "<<y<<" "<<c.get()<<endl;
}