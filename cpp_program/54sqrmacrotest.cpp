#include <iostream>
using namespace std;

#define BAD_SQR(x) x * x
#define SQR(x) ((x) * (x))

inline int sqrInline(int v){ return v*v; }

int main(){
int a=2,b=3;
cout<<BAD_SQR(a+b)<<endl;
cout<<SQR(a+b)<<endl;
cout<<sqrInline(a+b)<<endl;
}