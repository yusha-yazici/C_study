#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int a, i;
    i = 1;
    srand((unsigned)time(NULL));
    a = rand() % 10 +1;
    printf("値は%d\n",a);
    while(i<=a){
        printf("*");
        i++;
    }
    printf("\n");
}