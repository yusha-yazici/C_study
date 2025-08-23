#include <stdio.h>

int main(void){
    int a;
    printf("整数値を入力:");
    scanf("%d",&a);
    if(a >= 5){
        printf("５以上です\n");        
    }
    return 0;
}