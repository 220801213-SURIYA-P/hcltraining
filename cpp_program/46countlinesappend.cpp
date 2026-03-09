#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream in("test.txt");
string line;
int count=0;
while(getline(in,line)) count++;
in.close();

ofstream out("test.txt",ios::app);
out<<"Total Lines: "<<count<<endl;
out.close();
}