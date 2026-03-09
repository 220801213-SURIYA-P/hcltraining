#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"AND: "<<(a & b)<<endl;
    cout<<"OR: "<<(a | b)<<endl;
    cout<<"XOR: "<<(a ^ b)<<endl;
    cout<<"Left shift a: "<<(a << 1)<<endl;
    cout<<"Right shift a: "<<(a >> 1)<<endl;
}