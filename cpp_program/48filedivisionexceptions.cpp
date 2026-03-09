#include <iostream>
#include <fstream>
using namespace std;

int main(){
try{
ifstream in("num.txt");
if(!in) throw 1;
int a,b;
in>>a>>b;
if(b==0) throw 2;
cout<<a/b<<endl;
}catch(...){
cout<<"Error"<<endl;
}
}