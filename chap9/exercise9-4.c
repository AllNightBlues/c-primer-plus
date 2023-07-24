#include <stdio.h>

double harmonic_average(double, double);

int main(void) {
    double x;
    double y;
    printf("Please input x: ");
    scanf("%lf", &x);
    printf("Please input y: ");
    scanf("%lf", &y);
    printf("Result: %lf", harmonic_average(x, y));
}

double harmonic_average(double x, double y) {
    return 1 / ((1 / x + 1 / y) / 2);
}
