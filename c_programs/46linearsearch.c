#include <stdio.h>
int main() {
    int arr[100], size, value, pos = -1;
    printf("Enter size: ");
    scanf("%d", &size);
    for(int i=0;i<size;i++) scanf("%d",&arr[i]);
    printf("Enter value: ");
    scanf("%d",&value);
    for(int i=0;i<size;i++){
        if(arr[i]==value){ pos=i; break; }
    }
    if(pos!=-1) printf("Found at %d",pos);
    else printf("Not Found");
    return 0;
}