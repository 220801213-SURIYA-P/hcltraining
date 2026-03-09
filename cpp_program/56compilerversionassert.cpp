#include <iostream>
#include <cassert>
using namespace std;

int main(){
cout<<__VERSION__<<endl;
int val=5;
assert(val>0);
cout<<__FILE__<<" "<<__LINE__<<endl;
}