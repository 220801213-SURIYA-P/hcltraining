#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++)
        cin>>num[i];

    cout<<"Duplicates: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]==num[j]){
                cout<<num[i]<<" ";
                break;
            }
        }
    }
}