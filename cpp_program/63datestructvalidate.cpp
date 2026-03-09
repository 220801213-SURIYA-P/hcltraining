#include <iostream>
using namespace std;

struct Date{
int d,m,y;
};

Date makeDate(int d,int m,int y){
Date dt;
if(d>0 && d<=31 && m>0 && m<=12){dt.d=d;dt.m=m;dt.y=y;}
else{dt.d=0;dt.m=0;dt.y=0;}
return dt;
}

int main(){
Date a=makeDate(10,5,2024);
cout<<a.d<<" "<<a.m<<" "<<a.y<<endl;
}