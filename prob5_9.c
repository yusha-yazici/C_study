#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[10],bigger[10],smaller[10];
    int j = 0,k = 0;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 10;i++){
        a[i] = rand() % 100 +1;
        printf("%d ",a[i]);
        if(a[i] > 50){
            bigger[j] = a[i];
            j++;
        }else if(a[i] < 50){
            smaller[k] = a[i];
            k++;
        }
    }
    printf("\n\n");
    printf("50より大きい数:");
    for(int i = 0; i < j;i++){
        printf("%d ", bigger[i]);
    }
    printf("\n50より小さい数:");
    for(int i = 0; i < k;i++){
        printf("%d ", smaller[i]);
    }
    printf("\n");
    return 0;
}