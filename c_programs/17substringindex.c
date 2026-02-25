#include <stdio.h>
int substring_index(const char *str, const char *sub) {
    int i, j;
    for (i = 0; str[i]; ++i) {
        for (j = 0; sub[j] && str[i + j] == sub[j]; ++j);
        if (!sub[j]) return i;
    }
    return -1;
}
int main() {
    char str[1000], sub[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);
    for (int i = 0; str[i]; ++i) if (str[i] == '\n') str[i] = 0;
    for (int i = 0; sub[i]; ++i) if (sub[i] == '\n') sub[i] = 0;
    int idx = substring_index(str, sub);
    if (idx >= 0)
        printf("First occurrence at index %d\n", idx);
    else
        printf("Not found\n");
    return 0;
}
