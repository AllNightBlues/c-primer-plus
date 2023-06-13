#include <stdio.h>

int main(void) {

    double array1[8];
    double array2[8];

    double sum_of_array1 = 0;

    printf("Please enter values for array1:");
    for (int i = 0; i < 8; ++i) {
        scanf("%lf", &array1[i]);
        sum_of_array1 += array1[i];
        array2[i] = sum_of_array1;
    }

    for (int i = 0; i < 8; ++i) {
        printf("%lf ", array1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; ++i) {
        printf("%lf ", array2[i]);

    }



}
