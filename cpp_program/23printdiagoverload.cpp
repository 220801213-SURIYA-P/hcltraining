#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printDiag(int x){
    cout<<"int "<<x<<endl;
}

void printDiag(double x){
    cout<<"double "<<x<<endl;
}

void printDiag(string s){
    cout<<"string "<<s<<endl;
}

void printDiag(vector<int> v){
    cout<<"vector ";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main(){
    vector<int> a={1,2,3};
    printDiag(5);
    printDiag(3.5);
    printDiag(string("hi"));
    printDiag(a);
}