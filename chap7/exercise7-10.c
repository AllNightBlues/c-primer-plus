#include <stdio.h>
#include <stdbool.h>

#define SINGLE_TAX_LEVEL 17850
#define HOUSEHOLDER_TAX_LEVEL 23900
#define MARRIED_SHARED_TAX_LEVEL 29750
#define DIVORCED_TAX_LEVEL 14875
#define BASIC_TAX_RATE 0.15
#define EXCEEDED_TAX_RATE 0.28
#define CATEGORY_SINGLE 1
#define CATEGORY_HOUSEHOLDER 2
#define CATEGORY_MARRIED_SHARED 3
#define CATEGORY_DIVORCED 4

int main(void) {

    int category;
    float income;
    float tax;

    while (true) {
        printf("Please input your category:1)single; 2)householder; 3)married-shared; 4)divorced\n");
        scanf("%d", &category);
        if (!(category >= 1 && category <= 4)) {
            printf("Please input a valid category.\n");
            continue;
        }
        printf("Please input your income:\n");
        scanf("%f", &income);
        switch (category) {
            case CATEGORY_SINGLE:
                tax = income <= SINGLE_TAX_LEVEL
                        ? income * BASIC_TAX_RATE
                        : SINGLE_TAX_LEVEL * BASIC_TAX_RATE + (income - SINGLE_TAX_LEVEL) * EXCEEDED_TAX_RATE;
                break;
            case CATEGORY_HOUSEHOLDER:
                tax = income <= HOUSEHOLDER_TAX_LEVEL
                      ? income * BASIC_TAX_RATE
                      : HOUSEHOLDER_TAX_LEVEL * BASIC_TAX_RATE + (income - HOUSEHOLDER_TAX_LEVEL) * EXCEEDED_TAX_RATE;
                break;
            case CATEGORY_MARRIED_SHARED:
                tax = income <= MARRIED_SHARED_TAX_LEVEL
                      ? income * BASIC_TAX_RATE
                      : MARRIED_SHARED_TAX_LEVEL * BASIC_TAX_RATE + (income - MARRIED_SHARED_TAX_LEVEL) * EXCEEDED_TAX_RATE;
                break;
            case CATEGORY_DIVORCED:
                tax = income <= DIVORCED_TAX_LEVEL
                      ? income * BASIC_TAX_RATE
                      : DIVORCED_TAX_LEVEL * BASIC_TAX_RATE + (income - DIVORCED_TAX_LEVEL) * EXCEEDED_TAX_RATE;
                break;
            default:
                break;
        }
        printf("Tax: %f\n", tax);
    }
}