#include <stdio.h>


#define L_PER_GALLEN 3.785
#define KM_PER_MILE 1.609


int main(void) {

    float miles;
    float gallons;

    printf("please enter miles:");
    scanf("%f", &miles);
    printf("please enter gallons:");
    scanf("%f", &gallons);
    printf("it consumes 1 gallon of gasoline to run %.1f miles\n", miles / gallons);

    printf("the result of L/100km is: %.1f", L_PER_GALLEN * gallons / KM_PER_MILE / miles * 100);




}