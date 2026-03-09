#include <iostream>
#include <fstream>
using namespace std;

struct Student{
char name[20];
int mark;
};

int main(){
Student list[2]={{"A",80},{"B",90}};
ofstream out("stud.dat",ios::binary);
out.write((char*)list,sizeof(list));
out.close();

Student read[2];
ifstream in("stud.dat",ios::binary);
in.read((char*)read,sizeof(read));
in.close();

for(int i=0;i<2;i++) cout<<read[i].name<<" "<<read[i].mark<<endl;
}