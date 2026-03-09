#include <iostream>
#include <string>
using namespace std;

class Employee{
protected:
    string name;
    double sal;
public:
    void setEmp(string n,double s){
        name=n;
        sal=s;
    }
};

class Manager:public Employee{
    string dept;
public:
    void setDept(string d){ dept=d; }
    void show(){
        cout<<name<<" "<<sal<<" "<<dept<<endl;
    }
};

int main(){
    Manager m;
    m.setEmp("Raj",50000);
    m.setDept("Sales");
    m.show();
}