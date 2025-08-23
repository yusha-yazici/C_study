#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 46 -10;
    printf("摂氏%d度\n",a);
    if(a >= 30 ){
        printf("真夏日です\n");
    }else if(a >= 25 && a < 30 ){
        printf("夏日です\n");
    }else if(a < 0 ){
        printf("真冬日です\n");
    }
    return 0;
}