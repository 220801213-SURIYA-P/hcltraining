// Program 14: Check if string is palindrome (ignore case, non-alphanumeric)
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[1000], clean[1000];
    int i = 0, j = 0, len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Clean string: keep only alphanumeric, lowercased
    while (str[i]) {
        if (isalnum(str[i]))
            clean[j++] = tolower(str[i]);
        ++i;
    }
    clean[j] = '\0';
    len = j;
    int is_pal = 1;
    for (i = 0; i < len/2; ++i) {
        if (clean[i] != clean[len-1-i]) {
            is_pal = 0;
            break;
        }
    }
    printf(is_pal ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}
