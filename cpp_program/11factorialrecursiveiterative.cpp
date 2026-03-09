#include <iostream>
using namespace std;

int factrec(int n){
    if(n<=1)
        return 1;
    return n*factrec(n-1);
}

int factiter(int n){
    int res=1;
    for(int i=1;i<=n;i++)
        res=res*i;
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<factrec(n)<<endl;
    cout<<factiter(n);
}