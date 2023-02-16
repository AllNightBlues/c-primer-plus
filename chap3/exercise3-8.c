#include <stdio.h>

int main(void) {

    float cups;
    float cupsPerPint = 2;
    float ouncesPerCup = 8;
    float spoonsPerOunce = 2;
    float teaspoonsPerSpoon = 3;

    printf("please enter cups:");
    scanf("%f", &cups);
    printf("%f cups equals to %f pints, %f ounces, %f spoons, %f teaspoons\n",
           cups,
           cups / cupsPerPint,
           cups * ouncesPerCup,
           cups * ouncesPerCup * spoonsPerOunce,
           cups * ouncesPerCup * spoonsPerOunce * teaspoonsPerSpoon);
    //'cause float type is more accurate.

}