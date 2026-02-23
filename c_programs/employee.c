#include<stdio.h>
struct employee{
    char name[20];
    int id;
    int salary;
};
int main(){
    struct employee e[5];
    int highest_salary = 0;
    for(int i=0;i<5;i++){
        printf("Enter name, id and salary of employee %d: ", i+1);
        scanf("%s %d %d", e[i].name, &e[i].id, &e[i].salary);
    }
    for(int i=0;i<5;i++){
        if(e[i].salary>e[highest_salary].salary){
            highest_salary = i;
        }
    }   
    printf("the highest salary employee is %s with id %d and salary %d", e[highest_salary].name, e[highest_salary].id, e[highest_salary].salary);
    return 0;
}
