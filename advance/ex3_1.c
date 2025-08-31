#include <stdio.h>

int main() {
    char ch;

    printf("Input words:");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch | 0x20;
        }
        putchar(ch);
    }
    printf("\n");
    return 0;
}