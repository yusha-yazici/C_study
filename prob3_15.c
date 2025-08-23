#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 1;
    printf("数値：%d\n",a);
    if(a >= 80){
        printf("優\n");
    }else if(a < 80 && a >= 70){
        printf("良\n");
    }else if(a < 70 && a >= 60){
        printf("可\n");
    }else{
        printf("不可\n");
    }
    return 0;
}