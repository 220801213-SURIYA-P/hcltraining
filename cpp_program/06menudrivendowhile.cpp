#include <iostream>
using namespace std;

int main(){
    int choice;
    do{
        cout<<"\n1 Add\n2 Subtract\n3 Exit\n";
        cin>>choice;

        int a,b;
        if(choice==1){
            cin>>a>>b;
            cout<<a+b;
        }
        else if(choice==2){
            cin>>a>>b;
            cout<<a-b;
        }

    }while(choice!=3);
}