#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[10];
    int max = 0,min = 10;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 10;i++){
        a[i] = rand() % 10 +1;
        printf("%d ",a[i]);
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
             min = a[i];
        }
    }
    printf("\n\n");
    printf("最大値:%d",max);
    printf("\n最小値:%d",min);
    printf("\n");
    return 0;
}