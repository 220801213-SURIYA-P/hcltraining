#include <stdio.h>
typedef struct{ int id; char name[30]; }Customer;
typedef struct{ int itemId; float price; }Item;
typedef struct{ Customer c; Item i; }Order;
int main(){
    Order o;
    scanf("%d%s",&o.c.id,o.c.name);
    scanf("%d%f",&o.i.itemId,&o.i.price);
    printf("%d %s\n",o.c.id,o.c.name);
    printf("%d %.2f\n",o.i.itemId,o.i.price);
    return 0;
}