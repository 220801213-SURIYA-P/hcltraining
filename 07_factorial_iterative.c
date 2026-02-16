// Program 7: Iterative factorial
#include <stdio.h>
int main() {
    int n;
    unsigned long long fact = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
        return 1;
    }
    for (int i = 1; i <= n; ++i)
        fact *= i;
    printf("Factorial = %llu\n", fact);
    return 0;
}
