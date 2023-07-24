#include <stdio.h>

void triple_arrange(double *, double *, double *);

void double_arrange(double *, double *);

int main(void) {
    double x;
    double y;
    double z;
    printf("Please input x:");
    scanf("%lf", &x);
    printf("Please input y:");
    scanf("%lf", &y);
    printf("Please input z:");
    scanf("%lf", &z);
    triple_arrange(&x, &y, &z);
    printf("x: %lf, y: %lf, z: %lf", x, y, z);
}

void triple_arrange(double * x_p, double * y_p, double * z_p) {
    double_arrange(x_p, y_p);
    double_arrange(x_p, z_p);
    double_arrange(y_p, z_p);
}

void double_arrange(double * x_p, double * y_p) {
    double temp;
    if (*x_p > *y_p) {
        temp = *y_p;
        *y_p = *x_p;
        *x_p = temp;
    }
}





