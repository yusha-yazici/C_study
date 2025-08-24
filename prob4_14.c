#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i,r;
    srand((unsigned)time(NULL));
    r = rand() % 10 + 1;
    if(r % 2 == 0){
        for(i = 0;i < r;i++){
            printf("★");
        }
        printf("\n");
    }else{
        for(i = 0;i < r;i++){
            printf("☆");
        }
        printf("\n");
    }

    return 0;
}