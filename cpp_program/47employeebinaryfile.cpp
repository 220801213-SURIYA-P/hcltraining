#include <iostream>
#include <fstream>
using namespace std;

class Employee{
public:
char name[20];
int age;
};

int main(){
Employee e={"Ravi",30};
ofstream out("emp.dat",ios::binary);
out.write((char*)&e,sizeof(e));
out.close();

Employee r;
ifstream in("emp.dat",ios::binary);
in.read((char*)&r,sizeof(r));
in.close();

cout<<r.name<<" "<<r.age<<endl;
}