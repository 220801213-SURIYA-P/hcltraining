// Program 10: Check if a number is prime (optimized)
#include <stdio.h>
#include <math.h>
int main() {
    int n, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) is_prime = 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    printf(is_prime ? "Prime\n" : "Not Prime\n");
    return 0;
}
