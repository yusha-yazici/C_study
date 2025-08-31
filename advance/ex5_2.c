#include <stdio.h>

int main(int argc, char** argv) {
    char str1[128], str2[128], strsum[256];
    int i, j;

    printf("文字列1を入力してください:");
    scanf("%s", str1);
    printf("文字列2を入力してください:");
    scanf("%s", str2);

    // str1をstrsumにコピー
    i = 0;
    while (str1[i] != '\0') {
        strsum[i] = str1[i];
        i++;
    }

    // str2をstrsumの末尾に連結
    j = 0;
    while (str2[j] != '\0') {
        strsum[i] = str2[j];
        i++;
        j++;
    }

    // 連結した文字列の末尾にヌル文字を追加
    strsum[i] = '\0';

    printf("連結した文字列は%sです\n", strsum);

    return 0;
}