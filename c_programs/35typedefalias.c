#include <stdio.h>
typedef struct{ int id; char title[40]; }Book;
int main(){
    Book b; scanf("%d%s",&b.id,b.title);
    printf("%d %s\n",b.id,b.title);
    return 0;
}
