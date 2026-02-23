#include<stdio.h>
struct students {
    char name[20];
    int roll_no;
    float marks;
};
int main() {
    int highmarks_index = 0;
    struct students s1[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", s1[i].name, &s1[i].roll_no, &s1[i].marks);
    }
    printf("\nStudent Details:\n");
    for(int i = 1; i < 5; i++) {
        if(s1[i].marks > s1[highmarks_index].marks) {
            highmarks_index = i;
        }
    }
    printf("\nStudent with highest marks:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n",
           s1[highmarks_index].name,
           s1[highmarks_index].roll_no,
           s1[highmarks_index].marks);

    return 0;
}
