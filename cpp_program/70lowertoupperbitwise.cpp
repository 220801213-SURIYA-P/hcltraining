#include <iostream>
using namespace std;

char up(char c){
return c & '_';
}

int main(){
cout<<up('a')<<endl;
}