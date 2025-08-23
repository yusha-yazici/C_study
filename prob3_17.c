#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 1;
    printf("数値：%d\n",a);
    if(a % 2 == 0 && a < 50 ){
        printf("50以下の偶数です\n");
    }else if(a % 2 == 0 ){
        printf("偶数です\n");
    }else if(a < 50 ){
        printf("50以下です\n");
    }
    return 0;
}