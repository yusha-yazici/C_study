#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    srand((unsigned)time(NULL));
    for(int i = 0; i <6; i++){
        int a = rand() % 10 + 1;
        int b = rand() % 10 + 1;
        printf("%d + %d = %d\n",a,b,a+b);
    }
    return 0;
}