#include <stdio.h>
enum Status{PENDING,SHIPPED,DELIVERED};
int main(){
    enum Status s=PENDING; int choice;
    scanf("%d",&choice); s=choice;
    if(s==PENDING) printf("PENDING\n");
    else if(s==SHIPPED) printf("SHIPPED\n");
    else if(s==DELIVERED) printf("DELIVERED\n");
    return 0;
}