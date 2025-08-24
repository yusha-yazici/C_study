#include <stdio.h>

int main(void){
    int i;
    for(i = 1;i <= 100;i++){
    if(i % 10 == 0){
        printf("%d",i);
        printf("\n");
    }else{
        printf("%d ",i);
    }
}
    return 0;
}