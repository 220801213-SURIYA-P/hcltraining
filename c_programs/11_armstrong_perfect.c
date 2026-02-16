#include <stdio.h>
#include <math.h>
int is_armstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    for (int t = n; t; t /= 10) ++digits;
    for (int t = n; t; t /= 10)
        sum += pow(t % 10, digits);
    return sum == n;
}
int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; ++i)
        if (n % i == 0) sum += i;
    return sum == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf(is_armstrong(n) ? "Armstrong\n" : "Not Armstrong\n");
    printf(is_perfect(n) ? "Perfect\n" : "Not Perfect\n");
    return 0;
}
