#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 1;
    printf("数値：%d\n",a);
    if(a % 2 == 0 && a % 3 == 0){
        printf("2と3の公倍数です\n");
    }else if(a % 2 == 0 ){
        printf("2の倍数です\n");
    }else if(a % 3 == 0 ){
        printf("3の倍数です\n");
    }else{
        printf("2の倍数でも3の倍数でもありません\n");
    }
    return 0;
}