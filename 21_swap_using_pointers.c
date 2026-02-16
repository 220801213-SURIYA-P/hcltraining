#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}

//this is the program for the swap of two numbers using pointers in C. The function swap takes two integer pointers as arguments, swaps the values they point to, and the main function demonstrates how to use this swap function by taking user input and displaying the swapped values.