#include <stdio.h>
int s1[100],s2[100],top1=-1,top2=-1;
void push(int s[],int *top,int val){ s[++(*top)]=val; }
int pop(int s[],int *top){ return s[(*top)--]; }
void enqueue(int val){ push(s1,&top1,val); }
void dequeue(){
    if(top2==-1)
        while(top1!=-1) push(s2,&top2,pop(s1,&top1));
    if(top2==-1){ printf("Empty\n"); return; }
    printf("Removed %d\n",pop(s2,&top2));
}
int main(){
    enqueue(5); enqueue(10); enqueue(15);
    dequeue(); dequeue();
    return 0;
}