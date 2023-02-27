/* addemup.c*/
#include <stdio.h>

int main(void)
{
    int count, sum;
    int days;

    count = 0;
    sum = 0;

    printf("please enter days:");
    scanf("%d", &days);

    while (count++ < days) {
        sum = sum + count;
        printf("sum = %d\n", sum);
    }

    return 0;
}