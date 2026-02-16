// Program 13: Remove all occurrences of a character from string in-place
#include <stdio.h>
int main() {
    char str[1000], ch;
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to remove: ");
    scanf(" %c", &ch);
    for (i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ch)
            str[j++] = str[i];
    }
    str[j] = '\0';
    printf("Result: %s", str);
    return 0;
}
