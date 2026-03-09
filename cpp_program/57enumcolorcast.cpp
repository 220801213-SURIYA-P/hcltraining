#include <iostream>
using namespace std;

enum Color{RED,GREEN,BLUE};

int main(){
Color c=GREEN;
int num=static_cast<int>(c);
cout<<num<<endl;
}