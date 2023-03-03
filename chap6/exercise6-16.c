#include <stdio.h>

int main(void) {

    float daphne_investment = 100;
    float deirdre_investment = 100;

    int year = 1;

    do {
        daphne_investment += (100 * 0.1);
        deirdre_investment *= 1.05;
        year++;
    } while (deirdre_investment <= daphne_investment);

    printf("At the year of %d, Deirdre's investment : %f > Daphne's investment: %f", year, deirdre_investment, daphne_investment);




}
