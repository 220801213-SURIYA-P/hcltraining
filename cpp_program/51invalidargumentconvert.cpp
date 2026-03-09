#include <iostream>
#include <stdexcept>
using namespace std;

int convert(string txt){
for(char c:txt) if(!isdigit(c)) throw invalid_argument("bad");
return stoi(txt);
}

int main(){
try{
cout<<convert("12a")<<endl;
}catch(exception& e){
cout<<"Invalid"<<endl;
}
}