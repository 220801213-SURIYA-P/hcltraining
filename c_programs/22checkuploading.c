#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct {
    int roll;
    char name[20];
    float marks;
} Student;
int main() {
    Student s;
    srand(time(0));
    s.roll = rand() % 100 + 1;      
    s.marks = rand() % 101;       
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("\n--- Student Details ---\n");
    printf("Roll No : %d\n", s.roll);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);
    return 0;
}
