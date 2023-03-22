#include <stdio.h>


int main(void) {

    char ch;
    int count = 0;

    printf("Please enter an input:");
    ch = getchar();

    while (ch != '#') {
        count++;
        putchar(ch);
        printf("%d", ch);
        if (count % 8 == 0) {
            printf("\n");
        }
        ch = getchar();
    }
}