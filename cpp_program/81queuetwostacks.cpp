#include <iostream>
#include <stack>
using namespace std;

class Queue{
stack<int> in,out;
public:
void push(int x){in.push(x);}
int pop(){
if(out.empty()) while(!in.empty()){out.push(in.top());in.pop();}
int v=out.top(); out.pop(); return v;
}
};

int main(){
Queue q;
q.push(5);
q.push(6);
cout<<q.pop()<<endl;
}