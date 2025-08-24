#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i,r;
    srand((unsigned)time(NULL));
    r = rand() % 10 + 1;
    if(r > 5){
        for(i = 0;i < r;i++){
            printf("★");
        }
        printf("\n");
    }else{
        printf("発生した数値:%d\n",r);
    }

    return 0;
}