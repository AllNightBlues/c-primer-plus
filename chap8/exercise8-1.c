#include <stdio.h>


int main(void) {

    int count = 0;
    char ch;

    printf("Enter something to count:\n");

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            continue;
        }
        count++;
    }
    printf("Count: %d", count);

    return 0;
}