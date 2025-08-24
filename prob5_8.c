#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[5];
    int plus = 0,minus = 0, zero = 0;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 5;i++){
        a[i] = rand() % 21 -10;
        printf("%d ",a[i]);
        if(a[i] > 0){
            plus++;
        }else if(a[i] < 0){
            minus++;
        }else{
            zero++;
        }
    }
    printf("\n\n");
    printf("0より大きい数:%d",plus);
    printf("\n0より小さい数:%d",minus);
    printf("\n0の個数:%d",zero);
    printf("\n");
    return 0;
}