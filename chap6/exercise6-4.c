#include <stdio.h>


int main(void) {

    for (int i = 65; i < 71; ++i) {
        for (int j = i; j <= i + i - 65; ++j) {
            printf("%c", j);
        }
        printf("\n");
    }

}