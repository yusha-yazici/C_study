#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i,r,min= 100;
    srand((unsigned)time(NULL));
    for(i = 0;i < 5;i++){
        r = rand() % 100 + 1;
        printf("%d\n",r);
        if(r < min){
            min = r;
        } 
    }
    printf("最小値:%d\n",min);
    return 0;
}