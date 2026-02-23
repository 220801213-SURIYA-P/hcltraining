#include <stdio.h>
typedef struct{ float price; float discount; }Product;
float finalPrice(Product p){ return p.price - (p.price * p.discount / 100); }
int main(){
    Product p; scanf("%f%f",&p.price,&p.discount);
    printf("Final Price: %.2f\n",finalPrice(p));
    return 0;
}
