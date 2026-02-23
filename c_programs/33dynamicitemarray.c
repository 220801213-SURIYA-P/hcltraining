#include <stdio.h>
#include <stdlib.h>
typedef struct{ int id; float price; }Item;
int main(){
    int n; scanf("%d",&n);
    Item *items=malloc(n*sizeof(Item));
    for(int i=0;i<n;i++) scanf("%d%f",&items[i].id,&items[i].price);
    int choice; scanf("%d",&choice);
    if(choice==1){ items=realloc(items,(n+1)*sizeof(Item)); scanf("%d%f",&items[n].id,&items[n].price); n++; }
    else if(choice==2 && n>0) n--;
    for(int i=0;i<n;i++) printf("%d %.2f\n",items[i].id,items[i].price);
    free(items);
    return 0;
}
