#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[3][3];
    int max = 0,min = 9;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            a[i][j] = rand() % 9 +1;
            printf("%d ",a[i][j]);
            if(a[i][j] > max){
                max = a[i][j];
            }
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("最大値:%d\n",max);
    printf("最小値:%d\n",min);
    return 0;
}