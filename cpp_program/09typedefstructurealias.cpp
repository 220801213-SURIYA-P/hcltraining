#include <iostream>
#include <string>
using namespace std;

typedef struct{
    int roll;
    string name;
}Student;

int main(){
    Student stu;
    cin>>stu.roll;
    cin>>stu.name;

    cout<<stu.roll<<" "<<stu.name;
}