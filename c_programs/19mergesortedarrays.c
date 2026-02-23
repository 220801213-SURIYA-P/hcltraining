#include <stdio.h>
int main() {
    int n1, n2, a[100], b[100], c[200], i = 0, j = 0, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter sorted elements: ");
    for (int x = 0; x < n1; ++x) scanf("%d", &a[x]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter sorted elements: ");
    for (int x = 0; x < n2; ++x) scanf("%d", &b[x]);
    while (i < n1 && j < n2)
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while (i < n1) c[k++] = a[i++];
    while (j < n2) c[k++] = b[j++];
    printf("Merged array: ");
    for (int x = 0; x < k; ++x) printf("%d ", c[x]);
    printf("\n");
    return 0;
}
