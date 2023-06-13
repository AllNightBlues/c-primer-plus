#include <stdio.h>


int main(void) {

    for (int i = 70; i > 64; --i) {
        for (int j = 70; j >= i; --j) {
            printf("%c", j);
        }
        printf("\n");
    }

}