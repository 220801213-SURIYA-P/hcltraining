#include <iostream>
using namespace std;

namespace MySpace{
class Error{};
}

int main(){
try{
throw MySpace::Error();
}catch(MySpace::Error){
cout<<"caught"<<endl;
}
}