#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[5];
    int max = 0,min = 10;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 5;i++){
        a[i] = rand() % 10 +1;
        printf("%d ",a[i]);
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("\n");
    printf("最大値: %d\n",max);
    printf("最小値: %d\n",min);
    return 0;
}