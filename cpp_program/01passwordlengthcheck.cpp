#include <iostream>
#include <string>
using namespace std;

int main() {
    string pass;
    cout<<"Enter password: ";
    cin>>pass;
    int len=0;
    for(int i=0; pass[i] != '\0'; i++){
        len++;
    }
    if(len>8)
        cout<<"Password length greater than 8";
    else
        cout<<"Password length not greater than 8";
}