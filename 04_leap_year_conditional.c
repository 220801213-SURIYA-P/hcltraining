// Program 4: Leap year using only conditional operators
#include <stdio.h>
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ?
        printf("Leap Year\n") : printf("Not a Leap Year\n");
    return 0;
}
