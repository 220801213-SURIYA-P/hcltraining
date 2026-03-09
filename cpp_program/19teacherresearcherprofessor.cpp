#include <iostream>
using namespace std;

class Teacher{
public:
    virtual void work(){ cout<<"Teach"<<endl; }
};

class Researcher{
public:
    virtual void work(){ cout<<"Research"<<endl; }
};

class Professor:public Teacher,public Researcher{
public:
    void work(){ cout<<"Teach and Research"<<endl; }
};

int main(){
    Professor p;
    p.work();
}