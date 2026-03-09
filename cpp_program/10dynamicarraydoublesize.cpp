#include <iostream>
using namespace std;

int main(){
    int cap=2;
    int size=0;
    int *arr=new int[cap];

    int val;
    while(cin>>val){
        if(size==cap){
            cap=cap*2;
            int *temp=new int[cap];
            for(int i=0;i<size;i++)
                temp[i]=arr[i];
            delete[] arr;
            arr=temp;
        }
        arr[size]=val;
        size++;
    }

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    delete[] arr;
}