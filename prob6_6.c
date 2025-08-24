#include <stdio.h>
int stars(int);

int main(int argc,char** argv){
    int n;
    printf("表示する回数を入力してください:");
    scanf("%d",&n);
    stars(n);
    return 0;
}

int stars(int n){
        if(n > 0){
        for(int i = 0; i < n; i++){
            printf("★");
        }
        printf("\n");
    }else{
        printf("0より大きい値を入力してください。\n");
    }
}