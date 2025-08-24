#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[3][3];
    srand((unsigned)time(NULL));
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            a[i][j] = rand() % 9 +1;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}