#include <stdio.h>
#include <string.h>
int main(){
    char words[100][20]; int count[100]={0}; int n=0; char input[20];
    while(1){
        scanf("%s",input);
        if(strcmp(input,"stop")==0) break;
        int found=0;
        for(int i=0;i<n;i++){
            if(strcmp(words[i],input)==0){ count[i]++; found=1; break; }
        }
        if(!found){ strcpy(words[n],input); count[n]=1; n++; }
    }
    for(int i=0;i<n;i++) printf("%s : %d\n",words[i],count[i]);
    return 0;
}
