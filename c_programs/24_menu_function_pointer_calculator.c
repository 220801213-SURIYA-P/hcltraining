#include <stdio.h>
int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
int divide(int a,int b){ return b!=0?a/b:0; }
int main(){
    int choice,a,b;
    int (*op[4])(int,int)={add,sub,mul,divide};
    while(1){
        printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Exit\n");
        scanf("%d",&choice);
        if(choice==5) break;
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Result: %d\n",op[choice-1](a,b));
    }
    return 0;
}