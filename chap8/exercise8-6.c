#include <stdio.h>

char get_first(void);

int main(void) {
    printf("Please input something:\n");
    char ch = get_first();
    printf("The first non-blank char is: %c", ch);
}

char get_first(void) {
    int ch;

    while ((ch = getchar()) == ' ') {
        continue;
    }

    while (getchar() != '\n') {
        continue;
    }
    return ch;
}
