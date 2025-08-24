#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i,r;
    srand((unsigned)time(NULL));
    for(i = 0;i < 5;i++){
        r = rand() % 100 + 1;
        printf("%d\n",r);

    }
    return 0;
}