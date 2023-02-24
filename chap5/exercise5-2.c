#include <stdio.h>

int main(void) {

    int integer;

    printf("please enter an integer:");
    scanf("%d", &integer);
    for (int i = 0; i <= 10; ++i) {
        printf("%d ", integer + i);
    }

}