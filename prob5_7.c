#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[5];
    int sum = 0;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 5;i++){
        a[i] = rand() % 10 +1;
        printf("%d ",a[i]);
        sum += a[i];
    }
    printf("\n\n");
    printf("合計値:%d",sum);
    printf("\n平均値:%d",sum/5);
    printf("\n");

    printf("平均値より大きい数:");
    for(int i = 0;i < 5;i++){
        if(a[i] > sum/5){
            printf("%d ",a[i]);
        }
    }
    printf("\n平均値より小さい数:");
    for(int i = 0;i < 5;i++){
        if(a[i] < sum/5){
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return 0;
}