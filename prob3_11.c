#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("数値：%d\n",n);
    if(n >= 20 && n < 80){
        printf("20以上80未満です\n");
    }else{
        printf("20未満か80以上です\n");
    }
    return 0;
}