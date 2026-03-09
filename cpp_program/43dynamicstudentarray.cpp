#include <iostream>
using namespace std;

class Student{
public:
string name;
int mark;
};

int main(){
int n=3;
Student* list=new Student[n];

list[0].name="A";
list[0].mark=80;
list[1].name="B";
list[1].mark=85;
list[2].name="C";
list[2].mark=90;

for(int i=0;i<n;i++) cout<<list[i].name<<" "<<list[i].mark<<endl;

delete[] list;
}