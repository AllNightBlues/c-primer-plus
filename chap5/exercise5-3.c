#include <stdio.h>

int main(void) {

    int days = 1;

    while (days > 0) {
        printf("please enter days:");
        scanf("%d", &days);
        printf("%d days are %d weeks, %d days\n", days, days / 7, days % 7);
    }

}