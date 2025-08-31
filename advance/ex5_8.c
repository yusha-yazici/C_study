#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int len1, len2, len3, max_len;

    printf("文字列1：");
    scanf("%s", str1);
    printf("文字列2：");
    scanf("%s", str2);
    printf("文字列3：");
    scanf("%s", str3);

    len1 = strlen(str1);
    len2 = strlen(str2);
    len3 = strlen(str3);

    max_len = len1;
    if (len2 > max_len) {
        max_len = len2;
    }
    if (len3 > max_len) {
        max_len = len3;
    }

    printf("\nもっとも長い文字列：\n");
    if (len1 == max_len) {
        printf("%s\n", str1);
    }
    if (len2 == max_len) {
        printf("%s\n", str2);
    }
    if (len3 == max_len) {
        printf("%s\n", str3);
    }

    return 0;
}