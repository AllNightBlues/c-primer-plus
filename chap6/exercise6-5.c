#include <stdio.h>

const int ASCII_A = 65;

int main(void) {

    char input;
    printf("please enter a char:");
    scanf("%c", &input);

    int level = input - 'A' + 1;

    for (int i = 0; i < level; ++i) {

        for (int j = 0; j < level - i; ++j) {
            printf(" ");
        }

        for (int j = 0; j < i; ++j) {
            printf("%c", ASCII_A + j);
        }

        printf("%c", ASCII_A + i);

        for (int j = i; j > 0; --j) {
            printf("%c", ASCII_A + j - 1);
        }

        printf("\n");

    }

}