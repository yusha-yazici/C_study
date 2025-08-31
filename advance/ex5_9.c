#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[17];
    char *reverse = NULL;
    int len;
    printf("文字列を入力（最大16文字）");
    scanf("%s",string);
    len = strlen(string);
    reverse = (char*)malloc(sizeof(char)*(len +1));

    for(int i = 0; i < len; i++){
        reverse[i] = string[len - 1 - i];
    }
    reverse[len] = '\0';
    printf("%s\n",reverse);

    free(reverse);
    return 0;
}