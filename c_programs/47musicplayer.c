#include <stdio.h>
int main(){
    char *songs[]={"SongA","SongB","SongC"};
    int total=3,current=0;
    for(int i=0;i<10;i++){
        printf("Playing %s\n",songs[current]);
        current=(current+1)%total;
    }
    return 0;
}