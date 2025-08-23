#include <stdio.h>

int main(int argc, char** argv){
    int a,b;								//	変数a（キーボードからの値を代入)
	printf("a=");						//	キーボードからの入力を促す
	scanf("%d",&a);						//	キーボードから一文字入力
	printf("b=");						//	キーボードからの入力を促す
	scanf("%d",&b);	
	printf("a + b = %d \n",a + b);		//	a + bの値を表示
    printf("a - b = %d \n",a - b);		//	a - bの値を表示
    printf("a * b = %d \n",a * b);		//	a * bの値を表示
	printf("a / b = %d \n",a / b);		//　a / bの値を表示
    printf("a %% b = %d \n",a % b);		//	a % bの値を表示
    return 0;
}