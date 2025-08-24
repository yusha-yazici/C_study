#include <stdio.h>
 
//	関数のプロトタイプ宣言
int mul(int,int,int);

int main(int argc,char** argv){
	int a,b,c;
	int result;
	printf("a=");
	scanf("%d",&a);		//	1つ目の数、aを入力
	printf("b=");
	scanf("%d",&b);		//	2つ目の数、bを入力
	printf("c=");
	scanf("%d",&c);		//	3つ目の数、cを入力
	
	result = mul(a,b,c);	
	printf("%d * %d * %d = %d\n",a,b,c,result);	//	計算結果を出力
    return 0;
}

//	三つの整数の積を求める関数
int mul(int n1,int n2,int n3){
	return n1 * n2 * n3;
}