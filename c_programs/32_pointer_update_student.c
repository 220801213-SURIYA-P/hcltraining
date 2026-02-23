#include <stdio.h>
typedef struct{ int roll; char name[30]; float marks; }Student;
void update(Student *s,float m){ s->marks=m; }
int main(){
    Student s; float newMarks;
    scanf("%d%s%f",&s.roll,s.name,&s.marks);
    scanf("%f",&newMarks);
    update(&s,newMarks);
    printf("%d %s %.2f\n",s.roll,s.name,s.marks);
    return 0;
}