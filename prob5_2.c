#include <stdio.h>

int main(void){
    float a[] = {1.2, -1.3, 5.2, 4.8};
    int i;
    for(i = 0;i < 4;i++){
        printf("a[%d]=%.1f ",i,a[i]);
    }
    printf("\n");

    return 0;
}