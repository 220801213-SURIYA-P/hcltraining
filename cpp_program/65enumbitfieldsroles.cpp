#include <iostream>
using namespace std;

enum Role{USER=1,ADMIN=2,EDITOR=4};

struct Perm{
unsigned role:3;
};

int main(){
Perm p;
p.role=ADMIN;
cout<<p.role<<endl;
}