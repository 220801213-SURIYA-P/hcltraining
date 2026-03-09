#include <iostream>
#include <vector>
using namespace std;

void printDiag(int a){cout<<a<<endl;}
void printDiag(double a){cout<<a<<endl;}
void printDiag(string a){cout<<a<<endl;}
void printDiag(vector<int> a){
for(int v:a) cout<<v<<" ";
cout<<endl;
}

int main(){
printDiag(5);
printDiag(5.5);
printDiag(string("hello"));
vector<int> nums={1,2,3};
printDiag(nums);
}