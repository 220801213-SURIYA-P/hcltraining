#include <stdio.h>
typedef struct{ int roll; char name[30]; float marks; }Student;
int main(){
    Student s[5]; int top=0;
    for(int i=0;i<5;i++) scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
    for(int i=1;i<5;i++) if(s[i].marks>s[top].marks) top=i;
    printf("%d %s %.2f\n",s[top].roll,s[top].name,s[top].marks);
    return 0;
}
