#include <stdio.h>

double min(double, double);

int main(void) {
    double x = 0;
    double y = 0;
    double mini;
    printf("Please input number x:");
    scanf("%lf", &x);
    printf("Please input number y:");
    scanf("%lf", &y);
    mini = min(x, y);
    printf("min is %lf\n", mini);
}

double min(double x, double y) {
    return x > y ? y : x;
}