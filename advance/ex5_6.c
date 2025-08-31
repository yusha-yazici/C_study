#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    char str1[128], str2[128];
    int is_same = 1;
    printf("文字列1を入力してください:");
    scanf("%s", str1);
    printf("文字列2を入力してください:");
    scanf("%s", str2);
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            is_same = 0;
            break;
        }
        i++;
    }
    if(str1[i] != '\0' || str2[i] != '\0'){
        is_same = 0;
    } 
    if(is_same){
        printf("同じ文字列です\n");
    } else {
        printf("異なる文字列です\n");
    }
    return 0;
}