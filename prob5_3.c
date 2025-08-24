#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[10],odd[10],even[10];
    int j = 0, k = 0;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 10;i++){
        a[i] = rand() % 10 +1;
        printf("%d ",a[i]);
        if(a[i] % 2 == 0){
            even[j] = a[i];
            j++;
        }else{
            odd[k] = a[i];
            k++;
        }
    }
    printf("\n");
    printf("偶数:");
    for(int i = 0;i < j;i++){
        printf("%d ",even[i]);
    }
    printf("\n奇数:");
    for(int i = 0;i < k;i++){
        printf("%d ",odd[i]);
    }
    printf("\n");
    return 0;
}