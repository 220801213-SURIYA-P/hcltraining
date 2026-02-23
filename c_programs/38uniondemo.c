#include <stdio.h>
union Data{ int i; float f; char str[20]; };
int main(){
    union Data d;
    d.i=10; printf("%d\n",d.i);
    d.f=5.5; printf("%.2f\n",d.f);
    return 0;
}
