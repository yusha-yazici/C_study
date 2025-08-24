#include <stdio.h>

int get_absolute(int);

int main(void){
    int a;
    printf("整数を入力してください:");
    scanf("%d",&a);
    printf("%dの絶対値は%dです",a,get_absolute(a));
    return 0;
}

int get_absolute(int a){
    if(a < 0){
        return a * -1;
    }else{
        return a;
    }
}