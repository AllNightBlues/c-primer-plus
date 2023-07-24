#include <stdio.h>

void larger_of(double *, double *);

int main(void) {
    double x;
    double y;
    printf("Please input x: ");
    scanf("%lf", &x);
    printf("Please input y: ");
    scanf("%lf", &y);
    larger_of(&x, &y);
    printf("x: %lf, x: %lf", x, y);
}

void larger_of(double * x_pt, double * y_pt) {
    double temp;
    temp = *x_pt > *y_pt ? *x_pt : *y_pt;
    *x_pt = temp;
    *y_pt = temp;
}


