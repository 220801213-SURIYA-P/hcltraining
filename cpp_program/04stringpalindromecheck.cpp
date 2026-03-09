#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout<<"Enter string: ";
    cin>>word;

    int len=0;
    for(int i=0; word[i]!='\0'; i++)
        len++;

    int flag=1;
    for(int i=0;i<len/2;i++){
        if(word[i]!=word[len-1-i]){
            flag=0;
            break;
        }
    }

    if(flag)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}