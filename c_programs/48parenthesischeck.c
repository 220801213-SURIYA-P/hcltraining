#include <stdio.h>
#include <string.h>
char stack[100]; int top=-1;
void push(char c){ stack[++top]=c; }
char pop(){ return stack[top--]; }
int match(char a,char b){
    if(a=='('&&b==')') return 1;
    if(a=='{'&&b=='}') return 1;
    if(a=='['&&b==']') return 1;
    return 0;
}
int main(){
    char exp[100]; int balanced=1;
    printf("Enter expression: ");
    scanf("%s",exp);
    for(int i=0;i<strlen(exp);i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[') push(exp[i]);
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(top==-1||!match(pop(),exp[i])){ balanced=0; break; }
        }
    }
    if(top!=-1) balanced=0;
    if(balanced) printf("Balanced");
    else printf("Not Balanced");
    return 0;
}