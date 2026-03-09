#include <iostream>
using namespace std;

double add(double a,double b){return a+b;}
double sub(double a,double b){return a-b;}
double mul(double a,double b){return a*b;}
double divi(double a,double b){return a/b;}

int main(){
double (*calc)(double,double);
int choice;
double x=10,y=5;

cout<<"1 2 3 4"<<endl;
cin>>choice;

if(choice==1) calc=add;
if(choice==2) calc=sub;
if(choice==3) calc=mul;
if(choice==4) calc=divi;

cout<<calc(x,y)<<endl;
}