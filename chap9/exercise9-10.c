#include <stdio.h>

void to_base_n(unsigned long, int);

int main(void) {
    unsigned long number;
    int numeration;
    printf("Enter an integer and the value of numeration system (q to quit):\n");
    while (scanf("%lu%d", &number, &numeration) == 2) {
        printf("numeration %d equivalent: ", numeration);
        to_base_n(number, numeration);
        putchar('\n');
        printf("Enter an integer and the value of numeration system (q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}

void to_base_n(unsigned long n, int numeration) {
    int r;
    r = n % numeration;
    if (n >= numeration)
        to_base_n(n / numeration, numeration);
    printf("%d", r);
    return;
}


/* 129, 8 */
/* n = 129, r = 1  to_base_n(16, 8)*/
/* n = 16, r = 0  to_base_n(2, 8) */
/* n = 2, r = 2 */

