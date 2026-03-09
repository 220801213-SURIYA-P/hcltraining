#include <iostream>
#include <string>
using namespace std;

int main(){
    string txt;
    cout<<"Enter string: ";
    getline(cin,txt);

    int len=0;
    for(int i=0; txt[i] != '\0'; i++){
        len++;
    }
    cout<<"Length: "<<len<<endl;

    for(int i=0; txt[i] != '\0'; i++){
        if(txt[i]>='a' && txt[i]<='z')
            txt[i]=txt[i]-32;
    }

    cout<<"Uppercase: "<<txt;
}