#include <iostream>
using namespace std;

void swapnum(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    swapnum(&a,&b);
    cout<<a<<" "<<b;
}