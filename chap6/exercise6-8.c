#include <stdio.h>

int main(void) {

    float float1;
    float float2;
    printf("Please enter float1 and float2:\n");

    while (scanf("%f%f", &float1, &float2)) {
        printf("The result of (float1 - float2) / (float1 * float2) is: %f\n", (float1 - float2) / (float1 * float2));
        printf("Enter two floats to continue the loop:\n");
    }

}