#include <iostream>
using namespace std;

int main(){
int num;
cin>>num;
try{
if(num<0) throw num;
cout<<num<<endl;
}catch(int){
cout<<"Negative number"<<endl;
}
}