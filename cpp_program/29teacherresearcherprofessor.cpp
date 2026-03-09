#include <iostream>
using namespace std;

class Teacher{
public:
void work(){cout<<"Teaching"<<endl;}
};

class Researcher{
public:
virtual void work(){cout<<"Research"<<endl;}
};

class Professor:public Teacher,public Researcher{
public:
void work(){cout<<"Teaching and Research"<<endl;}
};

int main(){
Professor prof;
prof.work();
}