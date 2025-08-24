#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int r;
    srand((unsigned)time(NULL));
    while(1){
    r = rand() % 10 + 1;
    printf("%d\n",r);
        if(r == 10){
            printf("終了します\n");
            break;
        }
    }
    return 0;
}