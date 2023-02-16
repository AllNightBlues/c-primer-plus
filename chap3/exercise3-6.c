#include <stdio.h>

int main(void) {

    float quantityPerH20Molecular = 3E-23;
    float quantityOfOneQuartOfWater = 950.0f;
    float quarts;
    printf("please enter the quarts of water:");
    scanf("%f", &quarts);
    printf("the amount of H2O molecular is about:%e",
           quantityOfOneQuartOfWater * quarts / quantityPerH20Molecular);

}