#include <iostream>
using namespace std;

int main(){
long addr=1000;
int* ptr=reinterpret_cast<int*>(addr);
cout<<ptr<<endl;
}