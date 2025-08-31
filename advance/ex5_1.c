#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    char str1[128], str2[128], strsum[256];
    printf("文字列1を入力してください:");
    scanf("%s", str1);
    printf("文字列2を入力してください:");
    scanf("%s", str2);
    strcpy(strsum, str1);
    strcat(strsum, str2);
    printf("連結した文字列は%sです\n", strsum);
    
    return 0;
}