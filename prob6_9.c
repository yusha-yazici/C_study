#include <stdio.h>

int square(int,int);

int main(void){
    int a, b;
    printf("たて:");
    scanf("%d",&a);
    printf("よこ:");
    scanf("%d",&b);
    printf("\n");
    square(a,b);
    return 0;
}

int square(int a,int b ){
    for(int i = 0;i < a; i++){
        for(int j =0; j < b; j++){
            printf("■");
        }
        printf("\n");
    }
}