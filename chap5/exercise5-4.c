#include <stdio.h>
const float cm_to_inches = 0.3937;
const int feet_to_inches = 12;

int main(void) {

    float height;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height);
    feet = (int)(height * cm_to_inches / feet_to_inches);
    printf("%.1f cm = %d feet, %.1f inches\n", height, feet, height * cm_to_inches - feet * feet_to_inches);

    while (height > 0) {
        printf("Enter a height in centimeters: (<=0 to quit)");
        scanf("%f", &height);
        feet = (int)(height * cm_to_inches / feet_to_inches);
        printf("%.1f cm = %d feet, %.1f inches\n", height, feet, height * cm_to_inches - feet * feet_to_inches);
    }



}