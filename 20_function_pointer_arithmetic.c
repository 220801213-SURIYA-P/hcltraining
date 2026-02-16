// Program 20: Function pointer for arithmetic operations
#include <stdio.h>
typedef int (*arith_fn)(int, int);
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return b ? a / b : 0; }
int main() {
    int a, b, op;
    arith_fn fns[] = {add, sub, mul, divi};
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Select operation: 0=Add 1=Sub 2=Mul 3=Div: ");
    scanf("%d", &op);
    if (op < 0 || op > 3) {
        printf("Invalid operation\n");
        return 1;
    }
    printf("Result: %d\n", fns[op](a, b));
    return 0;
}
