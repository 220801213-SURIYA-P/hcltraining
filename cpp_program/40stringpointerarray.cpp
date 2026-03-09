#include <iostream>
using namespace std;

int main(){
string a="one",b="two",c="three";
string* arr[3]={&a,&b,&c};
for(int i=0;i<3;i++) cout<<*arr[i]<<endl;
}