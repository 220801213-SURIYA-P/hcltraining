#include <iostream>
using namespace std;

class Employee{
protected:
string name;
double salary;
public:
void setEmp(string person,double pay){
name=person;
salary=pay;
}
};

class Manager:public Employee{
string department;
public:
void setManager(string person,double pay,string dept){
name=person;
salary=pay;
department=dept;
}
void show(){
cout<<name<<" "<<salary<<" "<<department<<endl;
}
};

int main(){
Manager boss;
boss.setManager("Ravi",50000,"Sales");
boss.show();
}