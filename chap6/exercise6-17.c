#include <stdio.h>

int main(void) {

    float total = 1000000;
    int year = 0;

    do {
        total = total * 1.08 - 100000;
        year++;
    } while (total > 0);

    printf("At the end of year %d the account will run out", year);

}
