#include <iostream>
using namespace std;

struct Node{
int val;
Node* next;
};

int main(){
Node a{1,nullptr},b{2,nullptr},c{3,nullptr};
a.next=&b; b.next=&c; c.next=&b;
Node* slow=&a;
Node* fast=&a;
while(fast && fast->next){
slow=slow->next;
fast=fast->next->next;
if(slow==fast) break;
}
cout<<"cycle"<<endl;
}