#include <iostream>
using namespace std;

void change(int** p){
**p=50;
}

int main(){
int num=10;
int* ptr=&num;
change(&ptr);
cout<<num<<endl;
}