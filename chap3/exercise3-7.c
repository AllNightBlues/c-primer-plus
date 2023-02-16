#include <stdio.h>

int main(void) {

    int inches;
    float cmsPerInch = 2.54f;
    printf("please enter inches of your height:");
    scanf("%d", &inches);
    printf("centimeters of your height:%f", inches * cmsPerInch);

}