#include <stdio.h>
  
int numJudge(int);

int main(int argc,char** argv){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    numJudge(a);
    return 0;
}

int numJudge(int a){
    if(a == 0){
        printf("ゼロです\n");
    }else if(a%2 == 0){
        printf("偶数です\n");
    }else{
        printf("奇数です\n");
    }

}