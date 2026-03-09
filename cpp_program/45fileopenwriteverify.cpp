#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream out("test.txt");
if(out.is_open()){
out<<"Hello file"<<endl;
out.close();
}

ifstream in("test.txt");
string line;
while(getline(in,line)) cout<<line<<endl;
in.close();
}