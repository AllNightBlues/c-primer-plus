#include <stdio.h>

int main(void) {

    while (1) {
        int ascii;
        printf("please input an ASCII value:\n");
        scanf("%d", &ascii);
        if (ascii == 1234567890) {
            return 0;
        }
        printf("the output is: %c \n", ascii);
    }

}