#include <stdio.h>

int gcd(int,int);
int lcm(int,int);

int main(void){
    int a, b;
    printf("一つ目の値を入力してください:");
    scanf("%d",&a);
    printf("二つ目の値を入力してください:");
    scanf("%d",&b);
    printf("\n");
    printf("２つの数の最小公倍数は%dです\n",lcm(a, b));
    printf("２つの数の最大公約数は%dです\n",gcd(a, b));
    return 0;
}

int gcd(int a,int b){
    if(b ==0){
        return a;
    }else{
        return gcd(b, a % b);
    }
}

int lcm(int a,int b){
    return (a * b) / gcd(a, b);
}