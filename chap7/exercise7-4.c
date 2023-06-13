#include <stdio.h>

int main(void) {

    char ch;
    int replacement_count = 0;

    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            //putchar('!');
            printf("!");
            replacement_count++;
        } else if (ch == '!') {
            //putchar('!');
            //putchar('!');
            printf("!!");
            replacement_count++;
        } else {
            putchar(ch);
        }
    }

    printf("replacement_count: %d", replacement_count);
}