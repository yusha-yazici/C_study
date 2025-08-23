#include <stdio.h>

int main(void){
    int a;
    printf("整数値を入力:");
    scanf("%d",&a);
    if(a < 50){
        printf("50未満です\n");        
    }
    return 0;
}