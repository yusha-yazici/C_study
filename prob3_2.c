#include <stdio.h>

int main(void){
    int a;
    printf("整数値を入力:");
    scanf("%d",&a);
    if(a != 1){
        printf("1ではありません\n");        
    }else{
        printf("1です\n");
    }
    return 0;
}