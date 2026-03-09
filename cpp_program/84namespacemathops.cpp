#include <iostream>
using namespace std;

namespace MathOps{
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
}

int main(){
cout<<MathOps::add(3,2)<<endl;
cout<<MathOps::sub(3,2)<<endl;
}