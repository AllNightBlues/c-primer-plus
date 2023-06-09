#include <stdio.h>


int main(void) {

    char ch;
    int count = 0;

    printf("Please enter an input:");

    while ((ch = getchar()) != '#') {
        printf("%c-%d,", ch, ch);
        count++;
        if (count % 8 == 0) {
            printf("\n");
        }
    }
}