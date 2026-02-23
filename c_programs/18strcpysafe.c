#include <stdio.h>
void strcpy_safe(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n - 1 && src[i]; ++i)
        dest[i] = src[i];
    dest[i] = '\0';
}
int main() {
    char src[100], dest[10];
    printf("Enter a string: ");
    fgets(src, sizeof(src), stdin);
    strcpy_safe(dest, src, sizeof(dest));
    printf("Copied (max 9 chars): %s\n", dest);
    return 0;
}
