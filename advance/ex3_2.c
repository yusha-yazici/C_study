#include <stdio.h>

int main() {
    char ch;

    printf("Input words:");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch & 0xDF; // 0xDF = 1101 1111
        }
        putchar(ch);
    }
    printf("\n");
    return 0;
}