#include <iostream>
#include <fstream>
using namespace std;

void openFile(){
ifstream f("abc.txt");
if(!f) throw string("file error");
}

int main(){
try{
openFile();
}catch(string s){
cout<<s<<endl;
}
}