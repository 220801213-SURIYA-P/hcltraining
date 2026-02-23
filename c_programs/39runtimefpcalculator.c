#include <stdio.h>
double add(double a,double b){ return a+b; }
double sub(double a,double b){ return a-b; }
double mul(double a,double b){ return a*b; }
double divide(double a,double b){ return b!=0?a/b:0; }
int main(){
    double a,b; int ch;
    double (*ops[4])(double,double)={add,sub,mul,divide};
    scanf("%lf%lf",&a,&b);
    scanf("%d",&ch);
    printf("%.2f\n",ops[ch-1](a,b));
    return 0;
}
