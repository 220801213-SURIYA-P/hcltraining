#include <iostream>
#include <queue>
using namespace std;

class Stack{
queue<int> q1,q2;
public:
void push(int x){
q2.push(x);
while(!q1.empty()){q2.push(q1.front());q1.pop();}
swap(q1,q2);
}
int pop(){
int v=q1.front();
q1.pop();
return v;
}
};

int main(){
Stack s;
s.push(1);
s.push(2);
cout<<s.pop()<<endl;
}