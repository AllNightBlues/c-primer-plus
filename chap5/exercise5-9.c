#include <stdio.h>

void Tempratures(double);

const double FIVE = 5.0;
const double NINE = 9.0;
const double THIRTY_TWO = 32.0;
const double ABSOLUTE = 273.16;

int main(void) {

    double fahrenheit;

    printf("Please enter an Fahrenheit degree:");

    while (scanf("%lf", &fahrenheit)==1) {
        Tempratures(fahrenheit);
    }

}

void Tempratures(double fahrenheit) {
    printf("Celcius degree: %.2lf\n", FIVE / NINE * (fahrenheit - THIRTY_TWO));
    printf("Kelvins degree: %.2lf\n", FIVE / NINE * (fahrenheit - THIRTY_TWO) + ABSOLUTE);
    printf("Fahrenheit degree %.2lf\n", fahrenheit);

}
