#include <stdio.h>

#define SPACE 32
#define CTRL 64
#define COL 10

int main(void) {

    int count = 0;
    char ch;

    while ((ch = getchar()) != EOF) {
        count++;
        if (ch >= SPACE) {
            printf("%c-%d ", ch, ch);
        } else if (ch == '\n') {
            printf("%s", "\\n");
        } else if (ch == '\t') {
            printf("%s ", "\\t");
        } else {
            printf("^%c", ch + CTRL);
        }

        if (ch == '\n') {
            count = 0;
        }
        if (count % COL == 0) {
            printf("\n");
        }

    }
}