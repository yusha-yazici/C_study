#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    char str[128];
    int len;
    printf("文字列1を入力してください:");
    scanf("%s", str);
    len = strlen(str);
    printf("文字列の長さは%dです\n", len);
    
    return 0;
}