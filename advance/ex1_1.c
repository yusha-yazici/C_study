#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[5];
    srand((unsigned)time(NULL));
    for(int i = 0;i < 5;i++){
        a[i] = rand() % 10 +1;
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

/*
これでもいい
int main(void){
    srand((unsigned)time(NULL));
    int a;
    for(int i = 0;i < 5;i++){
        a = rand() % 10 +1;
        printf("%d ",a);
    }
    printf("\n");
    return 0;
}
*/



