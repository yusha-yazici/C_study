#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


int main(int argc, char** argv){
    int a;
    srand((unsigned)time(NULL));
    for(int i = 0; i < 4; i++){
        a = rand() % 21 - 10;
        printf("%dつめの数値:%d 絶対値:%d\n",i+1,a,abs(a));
    }
    return 0;
    }
