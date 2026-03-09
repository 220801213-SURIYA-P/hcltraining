#include <iostream>
using namespace std;

int toggle(int n){
return n ^ (1<<3);
}

int main(){
cout<<toggle(8)<<endl;
}