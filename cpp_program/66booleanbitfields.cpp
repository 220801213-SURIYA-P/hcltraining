#include <iostream>
using namespace std;

struct Flags{
unsigned admin:1;
unsigned active:1;
unsigned verify:1;
};

int main(){
Flags f{1,1,0};
cout<<f.admin<<" "<<f.active<<" "<<f.verify<<endl;
}