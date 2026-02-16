// Program 2: Read two integers and print sum, difference, product, quotient
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0)
        printf("Quotient = %d\n", a / b);
    else
        printf("Quotient: Division by zero error\n");
    return 0;
}
