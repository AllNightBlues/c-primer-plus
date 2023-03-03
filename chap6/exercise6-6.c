#include <stdio.h>


int main(void) {

    int max;
    int min;
    printf("Please enter the max integer:");
    scanf("%d", &max);
    printf("Please enter the min integer:");
    scanf("%d", &min);

    for (int i = min; i <= max; ++i) {
        printf("%d, %d, %d\n", i, i * i, i * i * i);
    }

}