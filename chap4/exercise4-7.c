#include <stdio.h>
#include <float.h>



int main(void) {


    double double_1 = 1.0 / 3.0;
    float float_1 = 1.0 / 3.0;

    printf("%.6f, %.12f, %.16f\n", double_1, double_1, double_1);
    printf("%.6f, %.12f, %.16f\n", float_1, float_1, float_1);
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);



}