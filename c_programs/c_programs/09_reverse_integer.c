// Program 9: Reverse integer and discuss overflow
#include <stdio.h>
#include <limits.h>
int main() {
    int n, rev = 0, orig, digit;
    printf("Enter an integer: ");
    scanf("%d", &n);
    orig = n;
    while (n != 0) {
        digit = n % 10;
        if (rev > (INT_MAX - digit) / 10 || rev < (INT_MIN - digit) / 10) {
            printf("Overflow!\n");
            return 1;
        }
        rev = rev * 10 + digit;
        n /= 10;
    }
    printf("Reversed: %d\n", rev);
    return 0;
}
