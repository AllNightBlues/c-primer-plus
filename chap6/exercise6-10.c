#include <stdio.h>

int sum_of_square(int, int);

int main(void) {

    int max;
    int min;

    printf("Enter lower and upper integer limits:");

    while (scanf("%d%d", &min, &max)) {
        if (max >= min) {
            printf("The sums of the squares from %d to %d is %d\n", min * min, max * max, sum_of_square(min, max));
            printf("Enter next set of limits:\n");
        } else {
            printf("Done");
            break;
        }
    }
}

int sum_of_square(int min, int max) {
    int sum = 0;
    for (int i = min; i <= max; ++i) {
        sum += i * i;
    }
    return sum;
}

