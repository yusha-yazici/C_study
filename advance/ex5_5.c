#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    char str1[128], str2[128];
    printf("文字列1を入力してください:");
    scanf("%s", str1);
    printf("文字列2を入力してください:");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0){
        printf("同じ文字列です\n");
    } else {
        printf("異なる文字列です\n");
    }
    //printf("strcmpの戻り値は%dです\n", strcmp(str1, str2));
    
    return 0;
}