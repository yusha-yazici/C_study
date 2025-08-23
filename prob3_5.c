#include <stdio.h>

int main(void){
    int a;
    printf("整数値を入力:");
    scanf("%d",&a);
    if(a < 80 && a >= 20){
        printf("20以上80未満の値です\n");        
    }
    return 0;
}