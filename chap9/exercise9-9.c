#include <stdio.h>

double power(double n, int p);

void recursion(double x, int exp);

int main(void)
{
    double x;
    int exp;
    printf("Enter a number and the integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    recursion(x, exp);
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}

void recursion(double x, int exp) {
    if (scanf("%lf%d", &x, &exp) != 2) {
        return;
    }
    double xpow = power(x, exp);
    printf("%.3g to the power %d is %.5g\n",x, exp, xpow);
    printf("Enter next pair of numbers or q to quit.\n");
    recursion(x, exp);
}

double power(double n, int p) {
    double pow = 1;
    int i;
    if (n == 0 && p == 0) {
        printf("0 to the power 0 is undefined.\n");
        return 1;
    } else if (n == 0) {
        return 0;
    } else if (p == 0) {
        return 1;
    } else {
        if (p > 0) {
            for (i = 1; i <= p; i++) {
                pow *= n;
            }
        } else {
            for (i = 1; i <= -p; i++) {
                pow *= (1 / n);
            }
        }
    }
    return pow;
}