#include <stdio.h>

int main(int argc, char** argv){
    int a;
    printf("西暦を入力して:\n");
    scanf("%d", &a);
    if(a % 400 == 0 || a % 4 == 0 && a % 100 != 0){
        printf("うるう年です\n");
    }else{
        printf("うるう年ではないです\n");
    }
    return 0;
}