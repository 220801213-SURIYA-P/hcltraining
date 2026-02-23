#include <stdio.h>
int main() {
    int n, arr[100];
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", arr + i);
    int sum = 0;
    for (int *p = arr; p < arr + n; ++p)
        sum += *p;
    printf("Average = %.2f\n", (float)sum / n);
    return 0;
}
