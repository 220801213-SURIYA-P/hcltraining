#include <stdio.h>
#include <stdlib.h>
struct compartment{
    int number;
    struct compartment* next;
};
int main(){
    struct compartment *head=NULL,*newcomp;
    for(int i=1;i<=3;i++){
        newcomp=(struct compartment*)malloc(sizeof(struct compartment));
        newcomp->number=i;
        newcomp->next=head;
        head=newcomp;
    }
    struct compartment* temp=head;
    while(temp!=NULL){
        printf("Compartment %d\n",temp->number);
        temp=temp->next;
    }
    return 0;
}