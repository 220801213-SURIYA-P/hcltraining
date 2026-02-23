#include <stdio.h>
typedef struct{ int id; char name[30]; float salary; }Employee;
int main(){
    Employee e[10]; float total=0; int high=0;
    for(int i=0;i<10;i++) scanf("%d%s%f",&e[i].id,e[i].name,&e[i].salary);
    for(int i=0;i<10;i++){ total+=e[i].salary; if(e[i].salary>e[high].salary) high=i; }
    printf("Total Salary: %.2f\n",total);
    printf("Highest: %d %s %.2f\n",e[high].id,e[high].name,e[high].salary);
    return 0;
}