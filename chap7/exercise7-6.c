#include <stdio.h>

int main(void) {

    char ch;
    int appearance_count = 0;

    while ((ch = getchar()) != '#') {
        if (ch == 'e') {
            putchar(ch);
            if ((ch = getchar()) == 'i') {
                putchar(ch);
                appearance_count++;
            }
        } else {
            putchar(ch);
        }
    }

    printf("appearance_count: %d", appearance_count);
}