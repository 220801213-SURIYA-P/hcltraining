#include <iostream>
using namespace std;

class MyException{};

int main(){
int salary;
cin>>salary;
try{
if(salary<0) throw MyException();
cout<<salary<<endl;
}catch(MyException){
cout<<"Salary error"<<endl;
}
}