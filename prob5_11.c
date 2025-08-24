#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[5],bigger[5],middle[5],smaller[5];
    int j = 0,k = 0,l = 0;
    srand((unsigned)time(NULL));
    for(int i = 0;i < 5;i++){
        a[i] = rand() % 100 +1;
        printf("%d ",a[i]);
        if(a[i] >= 80){
            bigger[j] = a[i];
            j++;
        }else if(a[i] < 60){
            smaller[l] = a[i];
            l++;
        }else{
            middle[k] = a[i];
            k++;
        }
    }
    printf("\n\n");
    printf("80以上の数:");
    for(int i = 0; i < j;i++){
        printf("%d ", bigger[i]);
    }
    printf("\n60以上80未満:");
    for(int i = 0; i < k;i++){
        printf("%d ", middle[i]);
    }
    printf("\n60未満の数:");
    for(int i = 0; i < l;i++){
        printf("%d ", smaller[i]);
    }
    printf("\n");
    return 0;
}