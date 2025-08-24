#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[5];
    srand((unsigned)time(NULL));
    for(int i = 0;i < 5;i++){
        a[i] = rand() % 10 +1;
        printf("%d ",a[i]);
    }
    printf("\n\n");
    for(int i= 0;i < 5;i++){
        for(int j = 0;j < a[i];j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}