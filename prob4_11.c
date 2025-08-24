#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i,r,max= 0;
    srand((unsigned)time(NULL));
    for(i = 0;i < 5;i++){
        r = rand() % 100 + 1;
        printf("%d\n",r);
        if(r > max){
            max = r;
        } 
    }
    printf("最大値:%d\n",max);
    return 0;
}