#include <stdio.h>

int max(int,int);                         
int main(int argc,char** argv){
    int a,b;
    int result;
    printf("1つ目の値を入力してください:");
    scanf("%d",&a);		//	1つ目の数、aを入力
    printf("2つ目の値を入力してください:");
    scanf("%d",&b);		//	2つ目の数、bを入力
    result = max(a, b);
    printf("%dと、%dのうち、大きい値は%dです。\n",a,b,result);
    return 0;
}

int max(int a,int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}