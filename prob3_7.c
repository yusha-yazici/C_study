#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数値：%d\n",n);
    if(n >= 5){
        printf("5以上の値です\n");
    }else{
        printf("5未満の値です\n");
    }
    return 0;
}