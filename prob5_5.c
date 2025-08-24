#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[10],three[10],other[10];
    int j = 0, k = 0;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 10;i++){
        a[i] = rand() % 10 +1;
        printf("%d ",a[i]);
        if(a[i] % 3 == 0){
            three[j] = a[i];
            j++;
        }else{
            other[k] = a[i];
            k++;
        }
    }
    printf("\n\n");
    printf("3の倍数:");
    for(int i = 0;i < j;i++){
        printf("%d ",three[i]);
    }
    printf("\n3の倍数でない数:");
    for(int i = 0;i < k;i++){
        printf("%d ",other[i]);
    }
    printf("\n");
    return 0;
}