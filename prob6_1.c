#include <stdio.h>
                     
//	関数のプロトタイプ宣言
int add(int,int);
int sub(int,int);

int main(int argc,char** argv){
    int a,b;
    int result1,result2;
    printf("a=");
    scanf("%d",&a);		//	1つ目の数、aを入力
    printf("b=");
    scanf("%d",&b);		//	2つ目の数、bを入力
    result1 = add(a,b);	
    result2 = sub(a,b);
    printf("%d + %d = %d\n",a,b,result1);	//	計算結果を出力
    printf("%d - %d = %d\n",a,b,result2);	//	計算結果を出力
    return 0;
}

//	二つの整数の和を求める関数
int add(int n1,int n2){
    return n1 + n2;
}
//	二つの整数の差を求める関数
int sub(int n1,int n2){
    return n1 - n2;
}