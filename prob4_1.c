#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a, i;
    srand((unsigned)time(NULL));
    a = rand() % 10 +1;
    printf("値は%d\n",a);
    for(i=1; i<=a; i++){
        printf("*");
    }
    printf("\n");
}