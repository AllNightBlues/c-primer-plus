#include <stdio.h>

int main(void) {

    char ch;
    int replacement_count = 0;

    while ((ch = getchar()) != '#') {
        switch(ch) {
            case '.':
                printf("!");
                replacement_count++;
                break;
            case '!':
                printf("!!");
                replacement_count++;
                break;
            default:
                putchar(ch);
        }
    }

    printf("replacement_count: %d", replacement_count);
}