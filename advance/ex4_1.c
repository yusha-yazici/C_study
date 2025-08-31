#include <stdio.h>

int main(int argc, char** argv){
    //  サイズSIZEの配列を用意する。
    int nums[] = { 1,2,3,4,5 };
    int *p = NULL;
    int i;
    p = nums + 4; //  pにnumsのアドレスを入力
    for( i = 0 ; i < 5; i++){
        printf("%d ",*p);
        p--;   
    }
	printf("\n");
    return 0;
}