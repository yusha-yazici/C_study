#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoiを使う場合はこのインクルードが必要


int main(int argc,char** argv){
    char numString[] = "100";	//	数値の文字列
    int num;	//	numStringの数値を入れる変数
    num = atoi(numString);    //	atoiで変換
    printf("%d\n",num);
    return 0;
}