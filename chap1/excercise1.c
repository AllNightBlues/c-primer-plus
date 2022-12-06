
#include <stdio.h>

int main() {
    int inches;
    double centimeters;

    printf("Please input a value of inches:\n");
    scanf("%d", &inches);

    centimeters = inches * 2.54;
    printf("Result: %f", centimeters);

    return 0;
}


