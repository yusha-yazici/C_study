#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[5];
    int over20under50 = 0,under10 = 0, over80 = 0;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 5;i++){
        a[i] = rand() % 101;
        printf("%d ",a[i]);
        if(a[i] > 80) over80 ++;
        if(a[i] <= 50 && a[i] >= 20) over20under50 ++;
        if(a[i] < 10) under10 ++;
    }
    printf("\n");
    printf("80より大きい数: %d\n",over80);
    printf("20以上50以下の数: %d\n",over20under50);
    printf("10未満の数: %d\n",under10);
    return 0;
}